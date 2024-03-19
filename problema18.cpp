#include <iostream>
#include <algorithm>
#include <string>

int problema18() {
    int n;
    std::cout << "Por favor, ingresa el numero de la permutacion que deseas encontrar: ";
    std::cin >> n;

    std::string s = "0123456789";

    for(int i = 1; i < n; i++) {
        std::next_permutation(s.begin(), s.end());
    }

    std::cout << "La permutacion numero " << n << " es: " << s << std::endl;

    return 0;
}
