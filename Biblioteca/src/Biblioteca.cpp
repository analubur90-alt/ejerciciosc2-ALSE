#include "Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
    std::cout << "Libro agregado: " << libro.getTitulo() << std::endl;
}

void Biblioteca::eliminarLibro(const std::string& isbn) {
    for (auto it = libros.begin(); it != libros.end(); ++it) {
        if (it->getISBN() == isbn) {
            std::cout << "Eliminando libro: " << it->getTitulo() << std::endl;
            libros.erase(it);
            return;
        }
    }
    std::cout << "Libro no encontrado." << std::endl;
}

void Biblioteca::mostrarLibrosDisponibles() const {
    std::cout << "\nLibros disponibles:\n";
    for (const auto& libro : libros) {
        if (libro.estaDisponible()) {
            std::cout << " - " << libro.getTitulo()
                      << " (" << libro.getAutor() << ")\n";
        }
    }
}

void Biblioteca::buscarPorTitulo(const std::string& titulo) const {
    std::cout << "\nBuscando libro: " << titulo << std::endl;
    for (const auto& libro : libros) {
        if (libro.getTitulo() == titulo) {
            std::cout << "Encontrado: " << libro.getTitulo()
                      << " de " << libro.getAutor() << std::endl;
            return;
        }
    }
    std::cout << "No se encontró el libro." << std::endl;
}