// P014_Bucles_(WHILE-DO WHILE-FOR)_v0.cpp 
//GilPulido

#include <iostream>
#include <chrono>
#include <thread>

void delay(int millisegundos)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(millisegundos));
}

int main()
{
    bool repetir = true;
    int opt;
    while (repetir)
    {
        std::cout << "1.- de 1000 a 0, 2.- 0 a 100 lento, 3.- 10x10\n";
        std::cout << "¿Qué contador quieres utilizar?\n";
        std::cin >> opt;
        switch (opt)
        {
        default:
            break;
        case 1:
            // de 1000 a 0
            // for
            for (int i = 1000; i >= 0; i--)
            {
                std::cout << "Contador " << i << std::endl;
            }
            // while
            int i = 0;
            while (i <= 1000) {
                std::cout << "Contador " << i << " ";
                i++;
            }
            // do-while
            int contador = 0;
            do {
                std::cout << contador << " ";
                contador++;
            } while (contador <= 1000);
            std::cout << std::endl;
            break;

        case 2:
            // contar lentamente de 0 a 100
            for (int i = 0; i <= 100; i++)
            {
                std::cout << "Contador " << i << std::endl;
                delay(200);
            }
            std::cout << std::endl;
            break;

        case 3:
            // 10x10
            for (int i = 1; i <= 100; i++)
            {
                std::cout << i << " ";
                if (i % 10 == 0) {
                    std::cout << std::endl;
                }
            }
            break;
        }
        std::cout << "¿Deseas repetir el contador? 0.- NO 1.- SI: ";
        std::cin >> repetir;
    }

    return 0;
}
