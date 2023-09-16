// Asesoriasv00.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int edad = 0;
    bool HoM = true;
    char inicial_nombre;
    char nombre[10];
    std::cout << "Hola Buen Dia " << std::endl;
    std::cout << "Me podrias decir tu edad" << std::endl;
    std::cin >> edad;
    std::cout << "tu edad es" << edad << std::endl;
    std::cout << "Me pdrias decir la Primera letra de tu nombre" << std::endl;
    std::cin >> inicial_nombre;
    std::cout << "Muy bien tu letra inicial es " << std::endl;
    std::cout << "cual es tu nomre completo" << std::endl;
    std::cin >> nombre;
    std::cout << "entoces te llamas " << nombre << std::endl;
    std::cout << "Que tengas un exelente dia " << nombre << std::endl;



    
}
