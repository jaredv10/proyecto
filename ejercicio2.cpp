#include <iostream>

//codigo arreglado
void fun_c(double a, int n, double& promedio, double& suma) {
  suma = 0.0;

  for (int i = 0; i <= n - 1; i++)
    suma += (a + i);

  promedio = suma / n;
}
int ejercicio2() {
  double promedio = 0.0;
  double suma = 0.0;
  fun_c(5.0, 3, promedio, suma);

  std::cout << "Suma: " << suma << std::endl;
  std::cout << "Promedio: " << promedio << std::endl;

  return 0;
}

