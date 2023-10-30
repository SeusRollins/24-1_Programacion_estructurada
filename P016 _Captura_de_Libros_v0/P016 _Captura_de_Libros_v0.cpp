// P016 _Captura_de_Libros_v0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido

#include <iostream>
#include <string>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string nombres[4];
        int anio[4];
    std::string autor[4];
    std::string estudio[4];
    bool repetir = true;

    while(repetir)
    { 
    //PRIMER BUCLE
    //captuda de datos

    for (int i = 0; i <= 4; i++)
    {
        
        std::cout << "cual es el nombre del videjuego no.:" << i + 1 << std::endl;
        getline(std::cin, nombres[i]);
        std::cout << "De que año es el videojuego no.:" << i + 1 << std::endl;
        std::cin >> anio[i];
        std::cin.ignore();
        std::cout << "cual es el autor del videojuego no.:" << i + 1 << std::endl;
        getline(std::cin, autor[i]);
        std::cout << "cual es el estudio desarrollador del juego no.:" << i + 1 << std::endl;
        getline(std::cin, estudio[i]);

    }
   //SEGUNDO BUCLE 
    //mostrar datos
    for (int j = 0; j <= 4; j++)
    {
        std::cout << "El juego" << j + 1 << "se llama" << nombres[j] << std::endl;
        std::cout << "El juego" << j + 1 << "es del año" << anio[j] << std::endl;
        std::cout << "El juego" << j + 1 << "es del autor" << autor[j] << std::endl;
        std::cout << "El juego" << j + 1 << "es de la desarrolladora" << estudio[j];

    }
    std::cout << "Deseas repetir la captura de datos? 0.- NO 1.- SI: \n";
    std::cin >> repetir;
    system("cls");
    }
}
