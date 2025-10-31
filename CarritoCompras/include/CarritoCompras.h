#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include "ItemCarrito.h"
#include <vector>

class CarritoCompras {
private:
    std::vector<ItemCarrito> items;

public:
    void agregarProducto(const Producto& producto, int cantidad);
    void eliminarProducto(const std::string& nombre);
    float calcularTotal() const;
    void mostrarCarrito() const;
};

#endif