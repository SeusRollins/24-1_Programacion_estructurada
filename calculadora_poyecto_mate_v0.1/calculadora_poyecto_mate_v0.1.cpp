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
    bool repetir = true;

    int resultadoSuma = 0;
    int resultadoResta = 0;
    int resultadoMultiplicacion = 0;
    int resultadoDecimal = 0;

    while (repetir)
    {
        std::cout << "Elija qué operación quiere hacer\n 1.- Suma, 2.- Resta, 3. Multiplicación, 4. División, "
            "5.- Mayor o menor que, 6.- Convierte de decimal a binario, 7.- De binario a decimal, "
            "8.- Suma de binarios, 9.- Resta de binarios, 10.- Multiplicación de binarios, 11.- División de binarios\n";
        std::cin >> operador;

        if (std::cin.fail())
        {
            std::cerr << "Error: operación no válida.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        try
        {
            switch (operador)
            {
                // ... (código para otros casos)

            case 8:
                // ... código para la suma de binarios
                resultadoSuma = /* resultado de la suma */;
                std::cout << "La suma binaria es: " << resultadoSuma << std::endl;
                break;
            case 9:
                // ... código para la resta de binarios
                resultadoResta = /* resultado de la resta */;
                std::cout << "La resta binaria es: " << resultadoResta << std::endl;
                break;
            case 10:
                // ... código para la multiplicación de binarios
                resultadoMultiplicacion = /* resultado de la multiplicación */;
                std::cout << "La multiplicación binaria es: " << resultadoMultiplicacion << std::endl;
                break;
            case 11:
                // ... código para la división de binarios
                resultadoDecimal = /* resultado de la división */;
                std::cout << "El resultado de la división binaria es: " << resultadoDecimal << std::endl;
                break;
            default:
                std::cerr << "Operador no válido. Por favor, seleccione una opción válida.\n";
                break;
            }

            std::cout << "¿Desea realizar otra operación? 0.- NO 1.- SÍ:\n";
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



