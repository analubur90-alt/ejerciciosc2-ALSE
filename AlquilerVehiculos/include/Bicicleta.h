#ifndef BICICLETA_H
#define BICICLETA_H

#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
private:
    bool tieneCanasto;

public:
    Bicicleta(const std::string& m, const std::string& mod, const std::string& p, bool canasto);

    void mostrarInformacion() const override;
};

#endif