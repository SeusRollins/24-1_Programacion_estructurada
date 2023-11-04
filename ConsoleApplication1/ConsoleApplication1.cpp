#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>

void delay(int millisegundos)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(millisegundos));
}
int main()
{
//semillero
    srand(time(NULL));
int matrices[3][3];
//saberfilas y columnas
int  filas = sizeof(matrices) / sizeof(matrices[0]);
std::cout << "el numero de filas es:" << filas << std::endl;
int columnas = sizeof(matrices[0]) / sizeof(matrices[0][0]);
std::cout << "elnumero de columnas  es: " << columnas << std::endl;
// ciclo para mostrar la matris
// recorrer filas
for (int i = 0; i < filas; i++)
{
    //ciclo para recorrer las columnas 
    for (int j = 0; j < columnas; j++)
    {
        matrices[i][j] = rand() % 9;
        std::cout << matrices[i][j] << " ";
        delay(200);
    }
}

}