// P016 _Captura_de_Libros_v0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido

#include <iostream>
#include <string>


int main()
{
   
    std::string nombres[4];
    int anio[4];
    std::string autor[4];
    std::string estudio[4];
    bool repetir = true;

    while (repetir)
    {
        // PRIMER BUCLE: Captura de datos
        for (int i = 0; i < 4; i++)
        {
            std::cout << "¿Cual es el nombre del videojuego? no. " << i + 1 << "?\n";
            getline(std::cin, nombres[i]);
      
            std::cout << "¿Cual es la fecha de lanzamiento videojuego? no. " << i + 1 << "?\n";
            std::cin>> anio[i];
            std::cin.ignore();

            std::cout << "¿Cual es el autor del videojuego? no. " << i + 1 << "?\n";
            getline(std::cin, autor[i]);
          

            std::cout << "¿Cuál es el estudio desarrollador del juego no. " << i + 1 << "?\n";
            getline(std::cin, estudio[i]);
         
        }

        // SEGUNDO BUCLE: Mostrar datos
        for (int j = 0; j < 4; j++)
        {
            std::cout << "El juego " << j + 1 << " se llama " << nombres[j] << "\n";
            std::cout << "El juego " << j + 1 << " es del año " << anio[j] << "\n";
            std::cout << "El juego " << j + 1 << " es del autor " << autor[j] << "\n";
            std::cout << "El juego " << j + 1 << " es de la desarrolladora " << estudio[j] << "\n";
        }

        std::cout << "¿Deseas repetir la captura de datos? 0.- NO 1.- SI: ";
        std::cin >> repetir;
        std::cin.ignore(); // Limpiar el búfer de entrada

        // Limpia la pantalla
        system("cls");
    }
    return 0;
}

