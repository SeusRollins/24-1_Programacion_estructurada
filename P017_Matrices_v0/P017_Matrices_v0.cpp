// P017_Matrices_v0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

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
    std::cout << "cual matriz te gustaria elegir? 1.-3*3 , 2.- 5*5, 3.-10*10\n";
    std::cin >> opt;

   
        switch (opt)
        {
      
    case 1:
        //semillero
        srand(time(NULL));
        int matrices[3][3];
        //saberfilas y columnas
        int  filas = sizeof(matrices) / sizeof(matrices[0]);
        std::cout << "el numero de filas es:" << filas << std::endl;
        int columnas = sizeof(matrices[0]) / sizeof(matrices);
        std::cout << "elnumero de columnas  es: " << columnas << std::endl;
        // ciclo para mostrar la matris
        // recorrer filas
        for(int i=0; i<filas;i++)
        {
            //ciclo para recorrer las columnas 
            for (int j = 0; j < columnas; j++)
            {
                matrices[i][j] = rand() % 9;
                std::cout << matrices[3][3] << " ";
                delay(200);
            }
        }
       break;
    case 2:
        break;
    default:
        break;
        }


        std::cout << "¿Deseas repetir las matrices? 0.- NO 1.- SI: ";
        std::cin >> repetir;
    }
    std::cout << "Hello World!\n";
}

