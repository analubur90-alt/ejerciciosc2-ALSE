#ifndef USUARIO_H
#define USUARIO_H

#include "CarritoCompras.h"
#include <string>
#include <vector>

class Usuario {
private:
    std::string nombre;
    std::vector<CarritoCompras> historialCompras;

public:
    Usuario(const std::string& n);
    void realizarCompra(CarritoCompras carrito);
    void mostrarHistorial() const;
};

#endif
