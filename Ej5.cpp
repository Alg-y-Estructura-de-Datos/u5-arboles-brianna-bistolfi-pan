#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    ArbolBinario<int> paquetes;

    //numero de seguimientos de los paquetes
    paquetes.put(1001);
    paquetes.put(5002);
    paquetes.put(3003);
    paquetes.put(2004);
    paquetes.put(4500);
    paquetes.put(7005);
    paquetes.put(8006);

    cout << "\nnumero de seguimiento de los paquetes pendientes: " << endl;
    paquetes.print();

    //paquetes entregados
    paquetes.remove(2004);
    paquetes.remove(4500);


    //se añanade nuevo paquete
    try {
        int nuevo = paquetes.search(3500);
        cout << "\nse añade paquete con seguimiento " << nuevo << " a penidentes" << endl;
    } catch (int e) {
        if (e == 404) {
            cout << "el numero de seguimiento ya tiene un paquete determinado" << endl;
        }
    }


    //verificar si esta el paquete

    try {
        int verificar = paquetes.search(1001);
        cout << "\nel paquete con seguimiento " << verificar << " sigue pendiente" << endl;
    } catch (int e) {
        if (e == 404) {
            cout << "el paquete con dicho numero de seguimiento ya fue entregado" << endl;
        }
    }


    cout << "\nnumero de seguimiento de los paquetes pendientes: " << endl;
    paquetes.print();

    return 0;
}
