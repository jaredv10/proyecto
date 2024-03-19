#include <iostream>
#include <cstdlib>

using namespace std;

int problema5() {
    //numero entero
  int a = 123;

  char cad[20];

  // Conversión a cadena
  itoa(a, cad, 10); // cad <-- "123"

  cout << "La cadena que representa al numero es: " << cad << endl;

  return 0;
}
