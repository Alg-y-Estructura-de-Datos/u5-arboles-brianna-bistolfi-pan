#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    ArbolBinario<int> socios;
    socios.put(500);
    socios.put(250);
    socios.put(750);
    socios.put(100);
    socios.put(300);
    socios.put(600);
    socios.put(800);
    cout << "\nLista de socios original: " << endl;
    socios.print();

    socios.remove(250); //se da de baja


    try {
        int libro = socios.search(300); //busco
        cout << "El socio " << libro << " esta activo." << endl;
    } catch (int e) {
        if (e == 404) {
            cout << "El socio no esta activo." << endl;
        }
    }

    try {
        int libro = socios.search(750); //busco
        cout << "El socio " << libro << " esta activo." << endl;
    } catch (int e) {
        if (e == 404) {
            cout << "El socio no esta activo." << endl;
        }
    }

    cout << "\nLista de socios actualizada: " << endl;
    socios.print();

    return 0;
}
