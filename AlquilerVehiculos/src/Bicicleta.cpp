#include "Bicicleta.h"
#include <iostream>

Bicicleta::Bicicleta(const std::string& m, const std::string& mod, const std::string& p, bool canasto)
    : Vehiculo(m, mod, p), tieneCanasto(canasto) {}

void Bicicleta::mostrarInformacion() const {
    std::cout << "[BICICLETA] ";
    Vehiculo::mostrarInformacion();
    std::cout << "   Tiene canasto: " << (tieneCanasto ? "Sí" : "No") << std::endl;
}