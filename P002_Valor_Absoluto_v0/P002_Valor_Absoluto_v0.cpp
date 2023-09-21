// P002_Valor_Absoluto_v0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <cmath>
#include <iostream>

int main()
{
    float valor;
    std::cout << "Escribe un numero flotante: ";
    std::cin >> valor;
    float valorAbsoluto = abs(valor);
    std::cout << "El valor absoluto es " << valorAbsoluto;
}

