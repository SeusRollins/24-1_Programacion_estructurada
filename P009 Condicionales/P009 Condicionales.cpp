// P009 Condicionales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido

#include <iostream>
#include <math.h>
#include <string>
#include <locale>
int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    int opc = 0;
    std::cout << "Que opción deseas realizar? \n1.- Suma\n2.- Resta\n" <<
        "3.- Multiplicación \n 4.- Division\n 5.- Valor absoluto\n 6.- mayor o menor que\n";
        std::cin >> opc;
        float num1=0;
        float num2=0;
    switch (opc)
    {
    case 1:
        std::cout << "suma\n";
        std::cout << "cuales el primer numero de tu suma\n";
        std::cin >> num1;
        std::cout << "cual es tu segundo numero de tu suma "
        std::cin >> num2;
        std::cout << "El resultado de tu suma es: " << a + b;
        break;
    case 2:
        std::cout << "resta\n";
        std::cout << "cual es tu primer numero de tu resta\n";
        std::cin >> num1;
        std::cout << "cual es tu segundo numero de tu resta\n";
        std::cin >> num2;
        std::cout << "el resultado de tu resta es: " << a - b;
        break;
    case 3:
        std::cout << "multiplicacion\n";
        std::cout << "cual es el primer numero de tu multiplicaion\n";
        std::cin >> num1;
        std::cout << "cual es tu segundo numero de tu multiplicacion\n";
        std::cin >> num2;
        std::cout << "el resultado de la multiplicación es: " << a * b;
        break;
    default:
        std::cout << "Esa opción no la conozco\n";
    }
}

