#include "Producto.h"
#include "CarritoCompras.h"
#include "Usuario.h"
#include <iostream>

int main() {
    Producto p1("Camiseta", 50.0, 10);
    Producto p2("Pantalón", 80.0, 5);
    Producto p3("Zapatos", 120.0, 3);

    CarritoCompras carrito;
    carrito.agregarProducto(p1, 2);
    carrito.agregarProducto(p2, 1);
    carrito.mostrarCarrito();

    carrito.eliminarProducto("Pantalón");
    carrito.mostrarCarrito();

    Usuario usuario("Luisa");
    usuario.realizarCompra(carrito);
    usuario.mostrarHistorial();

    return 0;
}
