#include <iostream>
#include <string>
#include <algorithm>

int problema6() {
    std::string input;
    std::cout << "Ingrese una cadena de caracteres: ";
    std::getline(std::cin, input);

    std::transform(input.begin(), input.end(), input.begin(),
        [](unsigned char c) { return std::islower(c) ? std::toupper(c) : c; });

    std::cout << "Cadena modificada: " << input << std::endl;

    return 0;
}
