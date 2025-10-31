#include "Biblioteca.h"
#include <iostream>

int main() {
    Biblioteca biblio;

    Libro l1("Cien años de soledad", "Gabriel García Márquez", "ISBN001");
    Libro l2("El Principito", "Antoine de Saint-Exupéry", "ISBN002");
    Libro l3("1984", "George Orwell", "ISBN003");

    biblio.agregarLibro(l1);
    biblio.agregarLibro(l2);
    biblio.agregarLibro(l3);

    biblio.mostrarLibrosDisponibles();

    biblio.buscarPorTitulo("1984");

    biblio.eliminarLibro("ISBN002");

    biblio.mostrarLibrosDisponibles();

    return 0;
}