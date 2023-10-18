// examen2xdv0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    bool tos;
    bool respiracion;
    bool fiebre;
    int resultado;
    std::cout << "responde las preguntas utilizando 1.para si y 0 para no\n";
    std::cout << "tienes tos?\n";
    std::cin >> tos;
    std::cout << "Tienes problemas de respiracion?\n";
    std::cin >> respiracion;
    std::cout << "tienes fiebre\n";
    std::cin >> fiebre;
    resultado = tos + respiracion + fiebre;
    if (resultado = 3)
    {
        std::cout << "ve al doctor\n";

    }
    if (resultado = 2)
    {
        std::cout << "quedate en casa\n";
    }
    if (resultado = 1)
    {
        std::cout << "puede que tengas gripa\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
