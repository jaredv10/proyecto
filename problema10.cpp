
#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        int value = romanMap[s[i]];
        if (value < prevValue) {
            result -= value;
        } else {
            result += value;
        }
        prevValue = value;
    }

    return result;
}

int problema10() {
    string romanNumeral;
    cout << "Ingrese un número en sistema romano: ";
    cin >> romanNumeral;

    int arabicNumeral = romanToInt(romanNumeral);
    cout << "El número en sistema arábigo es: " << arabicNumeral << endl;

    return 0;
}
