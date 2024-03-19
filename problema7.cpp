#include <iostream>
#include <string>
#include <set>
using namespace std;

string removeRepeatedChars(const std::string& input) {
    set<char> uniqueChars;
    string output;

    for (char c : input) {
        if (uniqueChars.find(c) == uniqueChars.end()) {
            uniqueChars.insert(c);

            output += c;
        }
    }

    return output;
}

int problema7() {
    string input;

    cout << "Escriba la palabra que desea procesar: ";
    getline(cin, input);  // Leer la entrada del usuario

    string output = removeRepeatedChars(input);
    cout << "Original: " << input << std::endl;
    cout << "Sin Repeticiones: " << output << std::endl;

    return 0;
}
