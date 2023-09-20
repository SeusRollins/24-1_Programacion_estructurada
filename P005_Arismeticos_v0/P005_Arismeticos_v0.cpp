// P005_Arismeticos_v0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    std::cout << "Ingresa un numero: \n";
    std::cin >> a;
    std::cout << "Ingresa la potencia a la que lo quieres elevar: \n";
    std::cin >> b;
    //pow(numero, potencia)
    //Para obtener la raiz debemos elevar el numero a la
    //fracción de potencia que queramos.
    //para raiz cuadrada pow(X,1/2)
    c = pow(a, b);
    std::cout << c << std::endl;
    d = sqrt(c);
    c = pow(c, .333);
    std::cout << "La raiz cuadrada del resultado es: " << c <<
    std::endl << d;
    std::cout << "Dame un numero del 0 al infinito" << std::endl;
    std::cin >> a;
    std::cout << "dame otro dijito" << std::endl;
    std::cin >> b;
    c = a * b;
    std::cout << "el resutado de la multiplicacion es " << c;
    std::cout << "Dame un numero del 0 al infinito" << std::endl;
    std::cin >> a;
    std::cout << "dame otro dijito" << std::endl;
    std::cin >> b;
    c = a + b;
    std::cout << "el resutado de la suma es " << c;
    std::cout << "Dame un numero del 0 al infinito" << std::endl;
    std::cin >> a;
    std::cout << "dame otro dijito" << std::endl;
    std::cin >> b;
    c = a - b;
    std::cout << "el resutado de la resta es " << c;
    std::cout << "Dame un numero del 0 al infinito" << std::endl;
    std::cin >> a;
    std::cout << "dame otro dijito" << std::endl;
    std::cin >> b;
    c = a / b;
    std::cout << "el resutado de la division es " << c;



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
