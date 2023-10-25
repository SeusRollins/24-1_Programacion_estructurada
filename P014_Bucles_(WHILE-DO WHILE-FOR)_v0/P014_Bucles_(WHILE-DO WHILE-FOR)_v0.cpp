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
    int opt;
    while (repetir)
    {
        std::cout << "1.-de 1000 a 0, 2.-0 a 100 lento,3.-10*10\n";
        std::cout << "que contadorquieres utilizar?\n";
        std::cin >> opt;
        switch (opt)
        {
        default:
            break;
        case 1:

            //de 1000 a 0
            for (int i = 1000; i >= 0; i--)
            {
                std::cout << "Contador" << i << std::endl;
               
            }
            int i = 0;
            while (i <= 1000){
                std::cout << "contador" << i << " ";
            i++;
            }
            int i= 0;
            do {
                std::cout << i << " ";
                i++;
            } while (i <= 1000);
            std::cout << std::endl;
            system("cls");
            break;

        case 2:

            // contar lento 0 a 100
            for (int i = 0; i <= 100; i++)
            {
                std::cout << "Contador" << i << std::endl;
                delay(200);
            }
            std::cout << std::endl;
            system("cls");
            break;
        case 3:
            //10*10
            for (int i = 1; i <= 100; i++)
            {
                std::cout << i << " ";
                if (i % 10 == 0) {
                    std::cout << std::endl;
                }
            }
        }
        std::cout << "Deseas repetir el contador? 0.- NO 1.- SI: ";
        std::cin >> repetir;
        system("cls");

    }

        
       return 0;
    
}
