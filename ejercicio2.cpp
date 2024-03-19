#include <iostream>

//codigo arreglado
void fun_c(double a, int n, double& promedio, double& suma) {
  suma = 0.0;

  for (int i = 0; i <= n - 1; i++)
    suma += (a + i);

  promedio = suma / n;
}

