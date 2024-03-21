#include <iostream>
#include <vector>

using namespace std;

// Función para calcular el factorial de un número
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Función para calcular el número de caminos en una cuadrícula de nxn
long long numPaths(int n) {
    // Usamos la fórmula del coeficiente binomial: (2n choose n) = (2n)! / (n!)^2
    return factorial(2*n) / (factorial(n) * factorial(n));
}

int problema16() {
    int n;
    cout << "Introduce el tamano de la cuadricula: ";
    cin >> n;

    long long paths = numPaths(n);
    cout << "Para una malla de " << n << "x" << n << " puntos hay " << paths << " caminos.";

    return 0;
}
