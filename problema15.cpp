#include <iostream>
#include <vector>

using namespace std;

// Función para calcular la intersección de dos rectángulos
vector<int> intersect(vector<int> A, vector<int> B) {
    int x = max(A[0], B[0]);
    int y = max(A[1], B[1]);
    int width = min(A[0] + A[2], B[0] + B[2]) - x;
    int height = min(A[1] + A[3], B[1] + B[3]) - y;

    if (width < 0 || height < 0) {
        return {0, 0, 0, 0};  // No hay intersección
    } else {
        return {x, y, width, height};
    }
}


int problema15() {
    vector<int> A = {0, 0, 8, 4};
    vector<int> B = {5, 2, 6, 7};

    vector<int> C = intersect(A, B);

    cout << "El rectángulo intersección C es: {" << C[0] << ", " << C[1] << ", " << C[2] << ", " << C[3] << "}\n";

    return 0;
}
