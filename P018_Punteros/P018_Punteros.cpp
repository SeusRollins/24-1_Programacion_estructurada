// P018_Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//GilPulido

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    bool repetir = true;

    while (repetir)
    {
        std::cout << "Ingrese el numero de filas (n): ";
        int n;
        std::cin >> n;

        std::cout << "Ingrese el numero de columnas (m): ";
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
                    std::cout << "Ingrese el elemento en la posicion [" << i << "][" << j << "]: ";
                    std::cin >> matriz[i][j];
                }
            }
        }

        std::cout << "La matriz es:\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << matriz[i][j] << " ";
            }
            std::cout << std::endl;
            delete[] matriz[i];
        }
        delete[] matriz;
        std::cout << "Deseas volver hacer matricez ? 0.- NO 1.- SI: ";
        std::cin >> repetir;
        system("cls");
    }
    return 0;
}
