#include "Vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo(const std::string& m, const std::string& mod, const std::string& p)
    : marca(m), modelo(mod), placa(p), disponible(true) {}

void Vehiculo::mostrarInformacion() const {
    std::cout << "Marca: " << marca
              << " | Modelo: " << modelo
              << " | Placa: " << placa
              << " | Disponible: " << (disponible ? "Sí" : "No") << std::endl;
}

bool Vehiculo::estaDisponible() const { return disponible; }

void Vehiculo::alquilar() { disponible = false; }

void Vehiculo::devolver() { disponible = true; }

std::string Vehiculo::getPlaca() const { return placa; }
