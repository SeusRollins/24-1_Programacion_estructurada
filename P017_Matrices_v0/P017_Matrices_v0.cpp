#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

void delay(int milliseconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    srand(time(NULL));
    int opt;
    bool repetir = true;

    do
    {
        std::cout << "¿Cuál matriz te gustaría elegir? 1.- 3x3, 2.- 5x5, 3.- 10x10\n";
        std::cin >> opt;

        switch (opt)
        {
        case 1:
        {
            // Ciclo 3x3
            int unidades[3][3];
            int filas = sizeof(unidades) / sizeof(unidades[0]);
            std::cout << "Ciclo de columnas 3x3 \n";
            std::cout << "\n";
            std::cout << "El número de filas es: " << filas << std::endl;

            int columnas = sizeof(unidades[0]) / sizeof(unidades[0][0]);
            std::cout << "El número de columnas es: " << columnas << std::endl;

            // Ciclo para mostrar información
            // Ciclo para recorrer filas
            for (int i = 0; i < filas; i++)
            {
                // Ciclo interno para recorrer las columnas
                for (int j = 0; j < columnas; j++)
                {
                    unidades[i][j] = rand() % 10;
                    std::cout << unidades[i][j] << " ";
                    delay(200);
                }
                std::cout << "\n";
            }
            break;
        }

        case 2:
        {
            // Ciclo 5x5
            int unidades1[5][5];
            int filas1 = sizeof(unidades1) / sizeof(unidades1[0]);
            std::cout << "Ciclo de columnas 5x5 \n";
            std::cout << "\n";
            std::cout << "El número de filas es: " << filas1 << std::endl;

            int columnas1 = sizeof(unidades1[0]) / sizeof(unidades1[0][0]);
            std::cout << "El número de columnas es: " << columnas1 << std::endl;

            for (int q = 0; q < filas1; q++)
            {
                for (int w = 0; w < columnas1; w++)
                {
                    unidades1[q][w] = rand() % 10;
                    std::cout << unidades1[q][w] << " ";
                    delay(200);
                }
                std::cout << "\n";
            }
            break;
        }

        case 3:
        {
            // Ciclo 10x10
            int unidades2[10][10];
            int filas2 = sizeof(unidades2) / sizeof(unidades2[0]);
            std::cout << "Ciclo de columnas 10x10 \n";
            std::cout << "\n";
            std::cout << "El número de filas es: " << filas2 << std::endl;

            int columnas2 = sizeof(unidades2[0]) / sizeof(unidades2[0][0]);
            std::cout << "El número de columnas es: " << columnas2 << std::endl;

            for (int e = 0; e < filas2; e++)
            {
                for (int r = 0; r < columnas2; r++)
                {
                    unidades2[e][r] = rand() % 10;
                    std::cout << unidades2[e][r] << " ";
                    delay(20);
                }
                std::cout << "\n";
            }
            break;
        }

        default:
            std::cout << "Eror 404 esto no existe\n";
            break;
        }
        std::cout << "¿Quires ver otra matriz?\n" << "1.- Si, 0.- No\n";
        std::cin >> repetir;
        system("cls");
    } while (repetir);
}