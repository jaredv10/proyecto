#include <iostream>
#include <vector>

using namespace std;

int sumadeDivisores(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int problema17() {
  int num1, num2;


  cout << "Ingrese el primer número: ";
  cin >> num1;

  cout << "Ingrese el segundo número: ";
  cin >> num2;


  int sumDivisors1 = sumadeDivisores(num1);
  int sumDivisors2 = sumadeDivisores(num2);


  if (sumDivisors1 == num2 && sumDivisors2 == num1) {
    cout << num1 << " y " << num2 << " son números amigables." << endl;
  } else {
    cout << num1 << " y " << num2 << " no son números amigables." << endl;
  }

  return 0;
}
