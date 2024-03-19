#include <iostream>

using namespace std;

int problema2() {
  // Arreglo de letras
  char letras[] = "ABBBBBBBBB"; // Ejemplo

  // Cuenta cada repeticiones de cada letra
  int contador[26] = {0};
  for (int i = 0; letras[i] != '\0'; ++i) {
    contador[letras[i] - 'A']++;
  }

  // Imprime los conteos
  for (int i = 0; i < 26; ++i) {
    if (contador[i] > 0) {
      char letra = i + 'A';
      cout << letra << ": " << contador[i] << endl;
    }
  }

  return 0;
}
