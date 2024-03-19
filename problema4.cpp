#include <iostream>
#include <cstdlib>

using namespace std;

int problema4(){
  char cad[] = "123";

  //atoi --> array to integer
  int a = atoi(cad); // a <-- 123

  cout << "El numero representado por la cadena es: " << a << endl;

  char cad2[10];
  //itoa --> integer to array

  itoa(a, cad2, 10); //cad <-- "123"
  cout << "La cadena que representa al numero es: " << cad2 << endl;

  return 0;
}
