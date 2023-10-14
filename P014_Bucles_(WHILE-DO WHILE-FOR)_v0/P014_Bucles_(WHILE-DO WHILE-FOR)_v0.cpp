// P014_Bucles_(WHILE-DO WHILE-FOR)_v0.cpp 
//GilPulido

#include <iostream>
#include <ctime>

void delay(int millisegundos)
{
    clock_t tiempo_de_carga = clock();
    while (clock() < tiempo_de_carga + millisegundos);
}
int main()
{
    bool repetir = true;
    while (repetir)
    {
        //de 1000 a 0
        for (int i = 1000; i >= 0; i--)
        {
            std::cout << "Contador" << i << std::endl;
        }
        std::cout << std::endl;
        system("cls");
        // contar lento 0 a 100
        for (int i = 0; i <= 100; i++)
        {
            std::cout << "Contador" << i << std::endl;
            delay(100);
        }
        std::cout << std::endl;
        system("cls");
        //10*10
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++) {
                std::cout << "Contador" << i * j << std::endl;
            }
            std::cout << std::endl;
            system("cls");
        }
        std::cout << "Deseas repetir el contador? 0.- NO 1.- SI: ";
        std::cin >> repetir;
        system("cls");
    }
    return 0;
}
