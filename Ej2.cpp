#include <iostream>


#include "Arbol/ArbolBinario.h"
using namespace std;


int main() {
    ArbolBinario<int> tienda;
    tienda.put(4001);
    tienda.put(2002);
    tienda.put(6003);
    tienda.put(1500);
    tienda.put(3500);
    tienda.put(5000);
    tienda.put(7000);
    cout << "Inventario original: " << endl;
    tienda.print();
    //se elimnan vendidos
    tienda.remove(2002);
    tienda.remove(6003);

    //se añade un nuevo producto
    tienda.put(2500);

    cout << "\nInventario actualizado: " << endl;
    tienda.print();

    try {
        int producto = tienda.search(4001);
        cout << " el producto: " << producto << " todavia esta en el sistema." << endl;
    } catch (int e) {
        if (e == 404) {
            cout << " el producto no se encontro en el sistema" << endl;
        }
    }


    return 0;
}
