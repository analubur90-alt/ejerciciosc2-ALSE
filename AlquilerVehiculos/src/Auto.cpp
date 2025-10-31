#include "Auto.h"
#include <iostream>

Auto::Auto(const std::string& m, const std::string& mod, const std::string& p, int cap)
    : Vehiculo(m, mod, p), capacidadPasajeros(cap) {}

void Auto::mostrarInformacion() const {
    std::cout << "[AUTO] ";
    Vehiculo::mostrarInformacion();
    std::cout << "   Capacidad de pasajeros: " << capacidadPasajeros << std::endl;
}