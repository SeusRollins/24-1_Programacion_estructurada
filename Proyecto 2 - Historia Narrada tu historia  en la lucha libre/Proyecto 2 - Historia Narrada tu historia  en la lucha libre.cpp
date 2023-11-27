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
                break;
            }
            case 2:
            {
                std::cout << "Bienvenido a Raw " << nobreluchador << " aqui comienza tu historia\n";
                break;
            }
            case 3:
            {
                std::cout << "Bienvenido a Raw " << nobreluchador << " aqui comienza tu historia\n";
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

