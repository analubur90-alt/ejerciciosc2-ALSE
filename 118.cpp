#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generarTriangulo(int numRows) {
    vector<vector<int>> triangulo(numRows);

    for (int i = 0; i < numRows; ++i) {
        triangulo[i].resize(i + 1);
        triangulo[i][0] = triangulo[i][i] = 1;

        for (int j = 1; j < i; ++j)
            triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
    }

    return triangulo;
}

void mostrarTriangulo(const vector<vector<int>>& t) {
    for (auto fila : t) {
        for (int n : fila)
            cout << n << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el numero de filas del triangulo de Pascal: ";
    cin >> n;

    vector<vector<int>> t = generarTriangulo(n);
    mostrarTriangulo(t);
    return 0;
}