// P019_Listas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//GilPulido

#include <iostream>
#include <string>

// Definición de la estructura del nodo
struct NodoCuerpo {
    std::string parte;
    NodoCuerpo* siguiente;

    // Constructor para facilitar la creación de nodos
    NodoCuerpo(const std::string& p) : parte(p), siguiente(nullptr) {}
};

int main() {
    // Creación de nodos para representar partes del cuerpo
    NodoCuerpo* cabeza = new NodoCuerpo("Cabeza");
    NodoCuerpo* torso = new NodoCuerpo("Torso");
    NodoCuerpo* pies = new NodoCuerpo("Pies");

    // Enlazar los nodos
    cabeza->siguiente = torso;
    torso->siguiente = pies;

    // Imprimir el contenido de los nodos
    std::cout << "Parte del cuerpo en el nodo cabeza: " << cabeza->parte << std::endl;
    std::cout << "Parte del cuerpo en el nodo torso: " << cabeza->siguiente->parte << std::endl;
    std::cout << "Parte del cuerpo en el nodo pies: " << cabeza->siguiente->siguiente->parte << std::endl;

    // Liberar la memoria al finalizar
    delete cabeza;
    delete torso;
    delete pies;

    return 0;
}