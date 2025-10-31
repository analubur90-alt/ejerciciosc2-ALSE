#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mejorGanancia(const vector<int>& precios) {
    int minPrecio = precios[0];
    int maxGanancia = 0;

    for (int i = 1; i < precios.size(); ++i) {
        minPrecio = min(minPrecio, precios[i]);
        maxGanancia = max(maxGanancia, precios[i] - minPrecio);
    }

    return maxGanancia;
}

int main() {
    vector<int> precios = {7, 1, 5, 3, 6, 4};
    cout << "La mejor ganancia posible es: " << mejorGanancia(precios) << endl;
    return 0;
}
