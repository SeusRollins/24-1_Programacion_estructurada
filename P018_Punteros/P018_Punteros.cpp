// P018_Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//GilPulido

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "Ingrese el número de filas (n): ";
    int n;
    std::cin >> n;

    std::cout << "Ingrese el número de columnas (m): ";
    int m;
    std::cin >> m;

    int** matriz = new int* [n];

    // Verificación si alguna dimensión es mayor a 3
    bool aleatorio = (n > 3 || m > 3);

    if (aleatorio) {
        std::srand(std::time(0));
        for (int i = 0; i < n; ++i) {
            matriz[i] = new int[m];
            for (int j = 0; j < m; ++j) {
                matriz[i][j] = std::rand() % 100; // Valores aleatorios entre 0 y 99
            }
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            matriz[i] = new int[m];
            for (int j = 0; j < m; ++j) {
                std::cout << "Ingrese el elemento en la posición [" << i << "][" << j << "]: ";
                std::cin >> matriz[i][j];
            }
        }
    }

    std::cout << "\nLa matriz es:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}
