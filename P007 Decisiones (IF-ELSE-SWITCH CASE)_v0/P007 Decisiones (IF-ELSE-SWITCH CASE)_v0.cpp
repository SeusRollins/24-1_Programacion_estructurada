// P007 Decisiones (IF-ELSE-SWITCH CASE)_v0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido

#include <iostream>
#include<locale.h>


int main()
{
    setlocale(LC_ALL, "es_Mx.UTF-8");
    int opc;
    float ganador;
    bool perdedor = false;
    int rropc;
    int elimination;
    int torneoe;
    int num;
    bool repetir = true;
   
    while (repetir)
    { 
    // Elimination Chamber (eliminacion) 
    // torneo (gurpos, semifinal y final)
    std::cout << "Hola bienvenido a la arena Mexico \n";
    std::cout << "que te gustaria jugar?/n 1.- royal rumble , 2.-Elimination Chamber 3.- torneo\n ";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        ganador = 1, 3, 6, 27, 10, 13, 14, 20,27,30;
      
        
        std::cout << "Bienvenido al modo royal rumble\n";
        std::cout << "de cuantos luchadores sera tu royal rumble\n";
        std::cout << "1.- 10 Luchadores , 2.- 20 Luchadores , 3.-30Luchadores\n";
        std::cin >> rropc;
        switch (rropc)
        {
        case 1:
            std::cout << "veo que has elegido la opcion de 10 luchadores\n";
            std::cout << "elije un numero del 1 al 10\n";
            std::cin >> num;

            if (num == ganador)
            {
                std::cout << "felicidades haz ganado el royal rumble\n";
            }
            else 
            {
              
              
                std::cout << "lo siento has perdido el royal rumble\n";
              
            }

            break;
            return 0;
        case 2:
            std::cout << "veo que has elegido la opcion de 20 luchadores\n";
            std::cout << "elije un numero del 1 al 20\n";
            std::cin >> num;

            if (num == ganador)
            {
                std::cout << "felicidades haz ganado el royal rumble\n";
            }
            else
            {


                std::cout << "lo siento has perdido el royal rumble\n";

            }
            break;
            return 0;
        case 3:
            std::cout << "veo que has elegido la opcion de 30 luchadores\n";
            std::cout << "elije un numero del 1 al 30\n";
            std::cin >> num;

            if (num == ganador)
            {
                std::cout << "felicidades haz ganado el royal rumble\n";
            }
            else
            {


                std::cout << "lo siento has perdido el royal rumble\n";

            }
        default:
            break;
        }
        return 0;
    case 2:
        std::cout << "Bienvenido a modo Elimination Chamber\n";
        std::cout << "Elije el numero de entrada de tu luchador\n";
        std::cout << "elije un numero del 1 al 6\n";
        std::cin >> num;
        ganador = 1, 3, 6;

        if (num ==ganador)
        {
            std::cout << "felicidades haz ganado la Elimination Chamber\n";
            std::cout << "ahora eres el nuevo campeon mundial\n";

        }
        else
        {


            std::cout << "lo siento has perdido la Elimination Chamber\n";

        }
        return 0;

    case 3:
        std::cout << "Bienvenido a modo torneo\n";
        std::cout << "cual sera tu numero en el toneo del 1 al 16\n";
        std::cin >> num;
        ganador = 2, 3, 7, 10, 14, 16;

        if (num == ganador)
        {
            std::cout << "felicidades haz ganado el torneo\n";
            std::cout << "ahora eres el nuevo campeon mundial indiscutido\n";

        }
        else
        {


            std::cout << "lo siento has perdido el torneo\n";

        }
    }
   
    std::cout << "Deseas luchar otra vez? 0.- NO 1.- SI: ";
    std::cin >> repetir;
    system("cls");

    }
    return 0;

}

