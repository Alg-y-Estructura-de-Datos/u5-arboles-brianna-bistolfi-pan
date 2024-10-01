#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;


int main() {
    ArbolBinario<int> biblioteca;

    biblioteca.put(101); //si un dato se repite habria que hacer un try catch
    //EL RPIMER DATTO QUE SE ENTREGA ES LA RAIZ SIEMORE Y DESP SE ACOMODA POR DEFINICION DE LIBRERIA EN DERECHA E IZQ (MENOR Y MAYOR )
    biblioteca.put(52);
    biblioteca.put(198);
    biblioteca.put(36);
    biblioteca.put(75);
    biblioteca.put(150);
    biblioteca.put(200);


    try {
        int libro = biblioteca.search(75); //busco
        cout << "El libro con ID 75 está en la biblioteca: " << libro << endl;
    } catch (int e) {
        if (e == 404) {
            cout << "El libro con ID 75 no está en la biblioteca." << endl;
        }
    }

    biblioteca.remove(52);
    cout << " el libro con ID 52 se elimino de la biblioteca. Fue prestado" << endl;


    cout << "estructura del sistema de libros despues de eliminar el ID 52: " << endl;

    biblioteca.print(); //imprime el arbol en orden

    return 0;
}
