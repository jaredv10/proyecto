#include <iostream>
#include <string>

using namespace std;

int problema9() {
    int n;
    cout << "Ingrese el número de cifras por segmento: ";
    cin >> n;

    string cadena;
    cout << "Ingrese la cadena de caracteres numéricos: ";
    cin >> cadena;

    // Asegurar que la cadena sea divisible por n
    while (cadena.length() % n != 0) {
        cadena = '0' + cadena;
    }

    // Sumar los números de n cifras
    long long suma = 0;
    for (size_t i = 0; i < cadena.length(); i += n) {
        suma += stoll(cadena.substr(i, n));
    }

    cout << "La suma de los números de " << n << " cifras es: " << suma << endl;

    return 0;
}
