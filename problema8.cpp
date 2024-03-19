#include <iostream>
#include <string>
#include <vector>

using namespace std;

pair<string, string> separarNumeros(const string& cadena) {
  string textoSinNumeros;
  string numeros;

  for (char caracter : cadena) {
    if (isdigit(caracter)) {
      numeros += caracter;
    } else {
      textoSinNumeros += caracter;
    }
  }

  return make_pair(textoSinNumeros, numeros);
}

int problema8() {
  string cadena;

  cout << "Ingrese una cadena: ";
  getline(cin, cadena);

  pair<string, string> resultado = separarNumeros(cadena);
  cout << "Texto sin números: " << resultado.first << endl;
  cout << "Números: " << resultado.second << endl;

  return 0;
}
