#include "Libro.h"

Libro::Libro(const std::string& t, const std::string& a, const std::string& i)
    : titulo(t), autor(a), isbn(i), disponible(true) {}

std::string Libro::getTitulo() const { return titulo; }
std::string Libro::getAutor() const { return autor; }
std::string Libro::getISBN() const { return isbn; }
bool Libro::estaDisponible() const { return disponible; }

void Libro::prestar() {
    if (disponible)
        disponible = false;
}

void Libro::devolver() {
    disponible = true;
}
