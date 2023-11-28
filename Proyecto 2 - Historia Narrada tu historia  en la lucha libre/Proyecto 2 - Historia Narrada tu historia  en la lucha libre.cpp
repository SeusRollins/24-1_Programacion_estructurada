// Proyecto 2 - Historia Narrada tu historia  en la lucha libre.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido

#include <iostream>
#include<locale.h>
#include "string"

int main()
{
    setlocale(LC_ALL, "es_Mx.UTF-8");
    std::string nombre;
    std::string nobreluchador;
    bool decision;
    int empresa;
    int marca;
    bool repetir = true;
    while (repetir)
    {
        std::cout << "hola bienvenido al mundo del wrestlin\n";
        std::cout << "caual es tu Nombre?\n";
        std::getline(std::cin, nombre);
        std::cout << "hola " << nombre << std::endl;
        std::cout << "cual va a ser tu nombre de luchador?\n";
        std::getline(std::cin, nobreluchador);
        std::cout << "hola " << nobreluchador << " que genial nombre\n";
        std::cout << "es hora de empezar tu histora\n";
        std::cout << "Cual es la empresa en la que te gustaria estar?\n";
        std::cout << "1.-wwe, 2.- aew, 3.-njp\n";
        std::cin >> empresa;
        switch (empresa)
        {
        case 1: 
        {
            std::cout << "Bienvenido a la wwe " << nobreluchador << "es hora de empezar tu legado a la grandeza\n";
            std::cout << "en  cual marca te gustaria debutar\n";
            std::cout << "1.-Raw,2.- SmackDonw, 3.-Nxt\n";
            std::cin >> marca;
            switch (marca)
            {
            case 1:
            {
                std::cout << "Bienvenido a Raw " << nobreluchador << " aqui comienza tu historia\n";
                std::cout << "para tu debut tienes dos posibles luhas\n";
                std::cout << "1.-luchar contra el campeon , 2.- luchar en la celda infernal \n";
                std::cin >> decision;
                if (decision = true)
                {
                    std::cout << "el campeon es  alguien dificil de vencer por eso es no le durate nada pero te ganaste el respeto del campeon\n";
                    std::cout << "el campeon  te ofece su mano en señal de resto \n";
                    std::cout << "1.- le das la mano , 2.- lo golpeas\n";
                    std::cin >> decision;
                    if (decision = true);
                    {
                        std::cout << "el publico explota en abucheos contra ti\n";
                        std::cout << "ahora tines la atencion de todos en la erena \n";
                        std::cout << "que vas hacer anete esta reacion?\n";
                        std::cout << "1.-tomar el campeonato,2.-pisar el campeonato y huir\n";
                        std::cin >> decision;
                        if()
                    } 
                }
                else
                {

                }
                break;
            }
            case 2:
            {
                std::cout << "Bienvenido a SmackDonw " << nobreluchador << " aqui comienza tu historia\n";
                break;
            }
            case 3:
            {
                std::cout << "Bienvenido a Nxt " << nobreluchador << " aqui comienza tu historia\n";
                break;
            }
            default:
                break;
            }
            break;
        }
        case 2:
        {
            std::cout << "entoces tu objetivo es aew\n";
            break;
        }
        
        case 3:
        {
            std::cout << "entonces tu objetivo es njp\n";
                break;
        }
        default:
            break;
        }
        std::cout << "Deseas volver a jugar ? 0.- NO 1.- SI: ";
        std::cin >> repetir;
        system("cls");

    }

}

