#include "CarritoCompras.h"
#include <iostream>

void CarritoCompras::agregarProducto(const Producto& producto, int cantidad) {
    items.emplace_back(producto, cantidad);
}

void CarritoCompras::eliminarProducto(const std::string& nombre) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getProducto().getNombre() == nombre) {
            items.erase(it);
            std::cout << "Producto eliminado del carrito.\n";
            return;
        }
    }
    std::cout << "Producto no encontrado en el carrito.\n";
}

float CarritoCompras::calcularTotal() const {
    float total = 0;
    for (const auto& item : items)
        total += item.getSubtotal();
    return total;
}

void CarritoCompras::mostrarCarrito() const {
    std::cout << "\n--- Carrito de Compras ---\n";
    for (const auto& item : items) {
        std::cout << item.getProducto().getNombre()
                  << " x" << item.getCantidad()
                  << " = $" << item.getSubtotal() << "\n";
    }
    std::cout << "Total: $" << calcularTotal() << "\n";
}
