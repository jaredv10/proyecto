#include <iostream>
using namespace std;

int problema1() {
    int cantidad;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int monedas[] = {500, 200, 100, 50};

    cout << "Billetes: " << endl;
    for(int i = 0; i < 6; i++) {
        cout << billetes[i] << ": " << cantidad / billetes[i] << endl;
        cantidad %= billetes[i];
    }

    cout << "Monedas: " << endl;
    for(int i = 0; i < 4; i++) {
        cout << monedas[i] << ": " << cantidad / monedas[i] << endl;
        cantidad %= monedas[i];
    }

    if(cantidad > 0) {
        cout << "Faltante: " << cantidad << endl;
    }

    return 0;
}
