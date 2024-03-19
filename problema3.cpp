#include <iostream>
#include <string>
using namespace std;


bool compararstrings(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    } else {
        return str1 == str2;
    }
}

int problema3() {
    string str1 = "hola";
    string str2 = "hola";
    string str3 = "gracias";

    cout << compararstrings(str1, str2) << endl; // imprime 1 si es verdadero
    cout << compararstrings(str1, str3) << endl; // imprime 0 si es falso
    return 0;
}
