#include "SistemaAlquiler.h"
#include <iostream>

void SistemaAlquiler::registrarVehiculo(std::shared_ptr<Vehiculo> vehiculo) {
    vehiculos.push_back(vehiculo);
    std::cout << "Vehículo registrado con placa: " << vehiculo->getPlaca() << std::endl;
}

void SistemaAlquiler::mostrarDisponibles() const {
    std::cout << "\nVehículos disponibles:\n";
    for (const auto& v : vehiculos) {
        if (v->estaDisponible()) {
            v->mostrarInformacion();
        }
    }
}

void SistemaAlquiler::alquilarVehiculo(const std::string& placa) {
    for (auto& v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (v->estaDisponible()) {
                v->alquilar();
                std::cout << "Vehículo con placa " << placa << " alquilado correctamente.\n";
            } else {
                std::cout << "El vehículo ya está alquilado.\n";
            }
            return;
        }
    }
    std::cout << "No se encontró el vehículo.\n";
}

void SistemaAlquiler::devolverVehiculo(const std::string& placa) {
    for (auto& v : vehiculos) {
        if (v->getPlaca() == placa) {
            v->devolver();
            std::cout << "Vehículo con placa " << placa << " devuelto correctamente.\n";
            return;
        }
    }
    std::cout << "No se encontró el vehículo.\n";
}