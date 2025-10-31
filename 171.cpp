#include <iostream>
#include <string>
using namespace std;

int numeroColumnaExcel(const string& columna) {
    int resultado = 0;
    for (char c : columna)
        resultado = resultado * 26 + (c - 'A' + 1);
    return resultado;
}

int main() {
    string columna;
    cout << "Ingrese la columna de Excel (ej. AB): ";
    cin >> columna;

    cout << "El numero equivalente es: " << numeroColumnaExcel(columna) << endl;
    return 0;
}
