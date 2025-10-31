#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include "Producto.h"

class ItemCarrito {
private:
    Producto producto;
    int cantidad;

public:
    ItemCarrito(const Producto& p, int c);

    Producto getProducto() const;
    int getCantidad() const;
    float getSubtotal() const;
};

#endif
