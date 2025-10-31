#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
private:
    int capacidadPasajeros;

public:
    Auto(const std::string& m, const std::string& mod, const std::string& p, int cap);

    void mostrarInformacion() const override;
};

#endif