// P007 Decisiones (IF-ELSE-SWITCH CASE)_v0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido

#include <iostream>
#include<locale.h>


int main()
{
    setlocale(LC_ALL, "es_Mx.UTF-8");
    int opc;
    
    int rropc;
    int elimination;
    int torneoe;
    // Elimination Chamber (eliminacion) 
    // torneo (gurpos, semifinal y final)
    std::cout << "Hola bienvenido a la arena Mexico \n";
    std::cout << "que te gustaria jugar?/n 1.- royal rumble , 2.-Elimination Chamber 3.- torneo\n ";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "Bienvenido al modo royal rumble\n";
        std::cout << "de cuantos luchadores sera tu royal rumble\n";
        std::cout << "1.- 10 Luchadores , 2.- 20 Luchadores , 3.-30Luchadores\n";
        std::cin >> rropc;
        switch (rropc)
        {
        case 1:
            std::cout << "veo que has elegido la opcion de 10 luchadores\n";
            break;
        case 2:
            std::cout << "veo que has elegido la opcion de 20 luchadores\n";
            break;
        case 3:
            std::cout << "veo que has elegido la opcion de 30 luchadores\n";

        default:
            break;
        }
    
    case 2:
        std::cout << "Bienvenido a modo Elimination Chamber\n";
        std::cout << "Elije el numero de entrada de tu luchador\n";


    case 3:
        std::cout << "Bienvenido a modo torneo\n";
        std::cout << "de cuantos luchadores sera tu royal rumble\n";
     
    }


    std::cout << "donde finalmente tendremos un gandor de royal runle\n";
   

}
