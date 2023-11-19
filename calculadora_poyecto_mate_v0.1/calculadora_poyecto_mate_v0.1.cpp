// calculadora_poyecto_mate_v0.1.cpp 
#include <iostream>
#include <math.h>
#include <string>
#include <locale>
#include <cmath>
#include <stdexcept>
//decimal a binario 
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        std::cout << "El número binario es: 0";
        return;
    }

    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    std::cout << "El número binario es: ";
    for (int j = i - 1; j >= 0; j--) {
        std::cout << binary[j];
    }
}

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
            ", 6.-Mayor o menor que, 7.- convierte de decimal a binario 8.- de binario a decimal, 9.- suma de binarios , \n" <<
            ", 10.- suma de binarios, 11.-multiplicacion de binarios , 12.- division de binarios\n";
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
                int numeroDecimal;
                std::cout << "Ingrese un número decimal: ";
                std::cin >> numeroDecimal;

                decimalToBinary(numeroDecimal);
                break;
                
            case 8:

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


