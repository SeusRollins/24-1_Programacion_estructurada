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
        std::cout << "El número binario es: 0\n";
        return;
    }

    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    std::cout << "El número binario es: \n";
    for (int j = i - 1; j >= 0; j--) {
        std::cout << binary[j];
    }
}
//binario a decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    return decimal;
}
// Función para sumar dos números binarios
int sumaBinaria(int binario1s, int binario2s) {
    int carry = 0, resultado = 0, base = 1;

    while (binario1s > 0 || binario2s > 0 || carry > 0) {
        int bit1 = binario1s % 10;
        int bit2 = binario2s % 10;

        int sumaBits = bit1 + bit2 + carry;

        resultado += (sumaBits % 2) * base;
        carry = sumaBits / 2;

        binario1s /= 10;
        binario2s /= 10;
        base *= 10;
    }

    return resultado;
}
// Función para restar dos números binarios
int restaBinaria(int binario1r, int binario2r) {
    int borrow = 0, resultado = 0, base = 1;

    while (binario1r > 0 || binario2r > 0) {
        int bit1 = binario1r % 10;
        int bit2 = binario2r % 10;

        // Restar el bit2 y el acarreo
        int restaBits = bit1 - bit2 - borrow;

        // Si la resta es negativa, se toma prestado
        if (restaBits < 0) {
            restaBits += 2;
            borrow = 1;
        }
        else {
            borrow = 0;
        }

        resultado += restaBits * base;

        binario1r /= 10;
        binario2r /= 10;
        base *= 10;
    }

    return resultado;
}

// Función para multiplicar dos números binarios
int multiplicacionBinaria(int binario1m, int binario2m) {
    int resultado = 0, factor = 1;

    while (binario2m > 0) {
        int bit2 = binario2m % 10;

        if (bit2 == 1) {
            resultado = resultado + (binario1m * factor);
        }

        binario2m /= 10;
        factor *= 10;
    }

    return resultado;
}
// Función para dividir dos números binarios
void divisionBinaria(int binario1d, int binario2d) {
    if (binario2d == 0) {
        std::cout << "Error: División por cero." << std::endl;
        return;
    }

    int cociente = 0;
    int divisor = binario2d;

    while (binario1d >= divisor) {
        int cocienteBit = 1;

        // Realizar la división parcial
        while (binario1d >= (divisor << 1)) {
            divisor <<= 1;
            cocienteBit <<= 1;
        }

        // Restar el divisor de binario1 y actualizar el cociente
        binario1d -= divisor;
        cociente += cocienteBit;
    }

    std::cout << "El cociente binario es: " << cociente << std::endl;
    std::cout << "El residuo binario es: " << binario1d << std::endl;
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
        std::cout << "Elija que operaciom quiere hacer\n 1.- Suma, 2.-Resta, 3.Multplicacion ,4- division ,\n" <<
            ", 5.-Mayor o menor que, 6.- convierte de decimal a binario 7.- de binario a decimal, 8.- suma de binarios , \n" <<
            ", 9.- suma de binarios, 10.-multiplicacion de binarios , 11.- division de binarios\n";
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


            case 1: {
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;

                resultado = num1 + num2;

                std::cout << "El resultado de la suma es " << resultado << std::endl;
                break;
            }
            case 2:{
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;

                resultado = num1 - num2;
                std::cout << "El resultado de la resta es " << resultado << std::endl;
                break;
            }
            case 3:{
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;
                resultado = num1 * num2;
                std::cout << "El resultado de la multiplacion es " << resultado << std::endl;
                break;
            }
            case 4: {
                std::cout << "Ingrese el primer numero por favor\n";
                std::cin >> num1;

                std::cout << "Ingrese el segundo numero\n";
                std::cin >> num2;
                resultado = num1 / num2;
                std::cout << "El resultado de la division es " << resultado << std::endl;
                break;
            }
            case 5: {
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
            }
            case 6: {
                int numeroDecimal;
                std::cout << "Ingrese un numero decimal:\n";
                std::cin >> numeroDecimal;

                decimalToBinary(numeroDecimal);
                break;
            }

            case 7: {
                int numeroBinario;
                std::cout << "Ingrese un numero binario:\n";
                std::cin >> numeroBinario;

                int resultadoDecimal = binaryToDecimal(numeroBinario);

                std::cout << "El numero decimal es:\n" << resultadoDecimal << std::endl;

                break;
            }
            case 8: {

                int binario1s, binario2s;

                std::cout << "Ingrese el primer numero binario: ";
                std::cin >> binario1s;

                std::cout << "Ingrese el segundo numero binario: ";
                std::cin >> binario2s;

                int resultadoSuma = sumaBinaria(binario1s, binario2s);

                std::cout << "La suma binaria es: " << resultadoSuma << std::endl;

                break;
            }
            case 9: {
                int binario1r, binario2r;

                std::cout << "Ingrese el primer numero binario: ";
                std::cin >> binario1r;

                std::cout << "Ingrese el segundo numero binario: ";
                std::cin >> binario2r;

                int resultadoResta = restaBinaria(binario1r, binario2r);

                std::cout << "La resta binaria es: " << resultadoResta << std::endl;
                break;
            }
            case 10: {
                int binario1m, binario2m;

                std::cout << "Ingrese el primer numero binario: ";
                std::cin >> binario1m;

                std::cout << "Ingrese el segundo numero binario: ";
                std::cin >> binario2m;

                int resultadoMultiplicacion = multiplicacionBinaria(binario1m, binario2m);

                std::cout << "La multiplicación binaria es: " << resultadoMultiplicacion << std::endl;

                break;
            }
            case 11: {
                int binario1d, binario2d;

                std::cout << "Ingrese el numerador binario: ";
                std::cin >> binario1d;

                std::cout << "Ingrese el divisor binario: ";
                std::cin >> binario2d;

                divisionBinaria(binario1d, binario2d);
                break;
            }
            }

            std::cout << "Deseas realizar otra operacion? 0.- NO 1.- SI:\n";
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