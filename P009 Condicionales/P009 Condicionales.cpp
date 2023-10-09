// P009 Condicionales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido

#include <iostream>
#include <math.h>
#include <string>
#include <locale>
#include <cmath>
#include <stdexcept>
int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
        int num1, num2;
        int operador;
        float valor;
        bool repetir = true;
       

        while (repetir)
        {
        std::cout << "Elija que operaciom quiere hacer\n 1.- Suma, 2.-Resta, 3.Multplicacion ,4- division ,5- potencia,\n" <<
           ", 6.-Mayor o menor que, 7.-Valor absoluto \n";
        std::cin >> operador;

        if (std::cin.fail())
        {
            std::cerr << "Error operacion no valida\n .\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;

        }
        int resultado;
        try
        {


            int resultado;
            switch (operador)
            {
            case 0:
                repetir = false;
                break;
            default:
                std::cerr << "Operador no válido. Por favor, seleccione una opción válida.\n";
                break;


            case 1:
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;

                resultado = num1 + num2;

                std::cout << "El resultado de la suma es " << resultado << std::endl;
                break;
            case 2:
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;

                resultado = num1 - num2;
                std::cout << "El resultado de la resta es " << resultado << std::endl;
                break;
            case 3:
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;
                resultado = num1 * num2;
                std::cout << "El resultado de la multiplacion es " << resultado << std::endl;
                break;
            case 4:
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;
                resultado = num1 / num2;
                std::cout << "El resultado de la division es " << resultado << std::endl;
                break;
            case 5:
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;
                resultado = num1 ^ num2;
                std::cout << "El resultado de la potencia es " << resultado << std::endl;
                break;
            case 6:
                std::cout << "dame tu primer numero por favor\n";
                std::cin >> num1;
                std::cout << "dame tu segundo numero por favor\n ";
                std::cin >> num2;

                if (num1 == num2)
                {
                    std::cout << "son iguales no hay diferencia\n";
                }
                else
                {
                    if (num1 > num2)
                    {
                        std::cout << num1 << " es mayor a " << num2 << std::endl;
                    }
                    else
                    {
                        if (num1 < num2)
                        {
                            std::cout << num1 << " es menor a " << num2 << std::endl;
                        }
                    }
                }
                break;
            case 7:
                std::cout << "Escribe un numero flotante: ";
                std::cin >> valor;
                float valorAbsoluto = abs(valor);
                std::cout << "El valor absoluto es " << valorAbsoluto;
                break;
            }
            
            std::cout << "Deseas realizar otra operacion? 0.- NO 1.- SI: ";
            std::cin >> repetir;
            system("cls");
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    return 0;
        
       

    }
