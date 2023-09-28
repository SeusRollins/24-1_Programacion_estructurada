// P003_Mayor_que_Menor_que_v0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string>
#include <locale>

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    float num1 = 0;
    float num2 = 0;
    std::cout << "dame tu primer numero por favor " << std::endl;
    std::cin >> num1;
    std::cout << "dame tu segundo numero por favor " << std::endl;
    std::cin >> num2;
    int mayor_edad = 7;
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
    
}

