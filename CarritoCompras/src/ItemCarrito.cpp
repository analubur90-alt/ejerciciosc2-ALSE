#include "ItemCarrito.h"

ItemCarrito::ItemCarrito(const Producto& p, int c)
    : producto(p), cantidad(c) {}

Producto ItemCarrito::getProducto() const { return producto; }
int ItemCarrito::getCantidad() const { return cantidad; }

float ItemCarrito::getSubtotal() const {
    return producto.getPrecio() * cantidad;
}
