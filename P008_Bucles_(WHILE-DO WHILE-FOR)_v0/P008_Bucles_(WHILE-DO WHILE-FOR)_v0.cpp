// P008_Bucles_(WHILE-DO WHILE-FOR)_v0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido

#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    bool seguir = false;
    while (seguir)
    {
        std::cout << "Perdiste una vida... Deseas continuar?. . .\n0.-No\n1.-Si\n";
        std::cin >> seguir;
    }
    //El que se ejecutara si o si 1 vez - Do While
    do
    {
        std::cout << "Entraste al do-while...0.-No\n1.-Si\n";
        std::cin >> seguir;
    } while (seguir);
    //El que tiene mayor control - For
    //1.- inicio; 2.- Limite; 3.- Tamaño de paso.
    //i=i+1 o i++
    for (int i = 0; i <= 100; i = i + 1)
    {
        std::cout << "El contador va en: " << i;
        std::cout << std::endl;
    }
}
