#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    //se crea arbol para almacenar el numero de mesas reservadas
    ArbolBinario<int> reservas;

    reservas.put(15);
    reservas.put(10);
    reservas.put(20);
    reservas.put(5);
    reservas.put(12);
    reservas.put(18);
    reservas.put(25);

    cout << "\nPrimer reservas de mesas: " << endl;
    reservas.print();

    //clientes cancelan sus reservas // se eliminan del sistema
    reservas.remove(10);
    reservas.remove(20);



    try {
        int mesa = reservas.search(13); //ver si la mesa ya esta reservada
        cout << "se reservo la mesa: " << mesa << endl;
    } catch (int e) {
        if (e == 404) {
            cout << "La mesa ya esta reservada" << endl;
        }
    }

    try {
        int mesa = reservas.search(12); //busco
        cout << "la mesa " << mesa << " aun esta reservada." << endl;
    } catch (int e) {
        if (e == 404) {
            cout << "La mesa no esta reservada" << endl;
        }
    }

    cout << "\nLista de mesas reservadas actualizadas: " << endl;
    reservas.print();

    return 0;
}