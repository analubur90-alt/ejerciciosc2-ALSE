#include "Producto.h"

Producto::Producto(const std::string& n, float p, int s)
    : nombre(n), precio(p), stock(s) {}

std::string Producto::getNombre() const {
    return nombre;
}

float Producto::getPrecio() const {
    return precio;
}

int Producto::getStock() const {
    return stock;
}

void Producto::setStock(int nuevoStock) {
    stock = nuevoStock;
}
