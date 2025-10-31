#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    std::string placa;
    bool disponible;

public:
    Vehiculo(const std::string& m, const std::string& mod, const std::string& p);
    virtual ~Vehiculo() = default;

    virtual void mostrarInformacion() const;
    bool estaDisponible() const;
    void alquilar();
    void devolver();
    std::string getPlaca() const;
};

#endif