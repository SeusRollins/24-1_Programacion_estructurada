#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

void delay(int millisegundos)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(millisegundos));
}

void llenarMatrizAleatoria(int matriz[][10], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = std::rand() % 11; // Rellena la matriz con números aleatorios entre 0 y 10
        }
    }
}

void mostrarMatriz(int matriz[][10], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "matriz[" << i << "][" << j << "]: " << matriz[i][j] << "\t";
            delay(200);
        }
        std::cout << "\n";
    }
}

int main()
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int matriz3x3[3][3];
    int matriz5x5[5][5];
    int matriz10x10[10][10];

    llenarMatrizAleatoria(matriz3x3, 3, 3);
    llenarMatrizAleatoria(matriz5x5, 5, 5);
    llenarMatrizAleatoria(matriz10x10, 10, 10);

    int opcion;
    do
    {
        std::cout << "Elija una matriz para ver (1 - 3x3, 2 - 5x5, 3 - 10x10, 0 - Salir): ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            std::cout << "Matriz 3x3:\n";
            mostrarMatriz(matriz3x3, 3, 3);
            break;
        case 2:
            std::cout << "Matriz 5x5:\n";
            mostrarMatriz(matriz5x5, 5, 5);
            break;
        case 3:
            std::cout << "Matriz 10x10:\n";
            mostrarMatriz(matriz10x10, 10, 10);
            break;
        case 0:
            std::cout << "Saliendo del programa.\n";
            break;
        default:
            std::cout << "Opción no válida. Por favor, elija una opción válida.\n";
        }
    } while (opcion != 0);

    return 0;
}
