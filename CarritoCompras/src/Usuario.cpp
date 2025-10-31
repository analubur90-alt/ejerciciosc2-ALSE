#include "Usuario.h"
#include <iostream>

Usuario::Usuario(const std::string& n) : nombre(n) {}

void Usuario::realizarCompra(CarritoCompras carrito) {
    historialCompras.push_back(carrito);
    std::cout << nombre << " ha realizado una compra por $" 
              << carrito.calcularTotal() << "\n";
}

void Usuario::mostrarHistorial() const {
    std::cout << "\nHistorial de compras de " << nombre << ":\n";
    for (size_t i = 0; i < historialCompras.size(); ++i) {
        std::cout << "Compra #" << i + 1 << ":\n";
        historialCompras[i].mostrarCarrito();
    }
}
