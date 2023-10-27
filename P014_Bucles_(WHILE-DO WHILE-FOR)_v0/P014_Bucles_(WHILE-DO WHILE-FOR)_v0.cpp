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
    int opt,i,contador;
    while (repetir)
    {
        std::cout << "1.- de 1000 a 0, 2.- 0 a 100 lento, 3.- 10x10\n";
        std::cout << "¿Qué contador quieres utilizar?\n";
        std::cin >> opt;
        switch (opt)
        {
        case 1:
            // de 1000 a 0
            // for
            for (i = 1000; i >= 0; i--)
            {
                std::cout << "Contador " << i << std::endl;
            }
            // while
            i = 0;
            while (i <= 1000) {
                std::cout << "Contador " << i << " ";
                i++;
            }
            // do-while
            contador = 0;
            do {
                std::cout << contador << " ";
                contador++;
            } while (contador <= 1000);
            std::cout << std::endl;
            break;

        case 2:
            // contar lentamente de 0 a 100
            for ( i = 0; i <= 100; i++)
            {
                std::cout << "Contador " << i << std::endl;
                delay(200);
            }
            std::cout << std::endl;
            break;

        case 3:
            // 10x10
            for ( i = 1; i <= 100; i++)
            {
                std::cout << i << " ";
                if (i % 10 == 0) {
                    std::cout << std::endl;
                }
            }
            break;
        default:
            std::cout << "No conozco esa opción\n";
            break;
        }
        std::cout << "¿Deseas repetir el contador? 0.- NO 1.- SI: ";
        std::cin >> repetir;
    }

}
