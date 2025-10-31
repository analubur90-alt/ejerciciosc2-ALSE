#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
private:
    std::string nombre;
    float precio;
    int stock;

public:
    Producto(const std::string& n, float p, int s);

    std::string getNombre() const;
    float getPrecio() const;
    int getStock() const;

    void setStock(int nuevoStock);
};

#endif