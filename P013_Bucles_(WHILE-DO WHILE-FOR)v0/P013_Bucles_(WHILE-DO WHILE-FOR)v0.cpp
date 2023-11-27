// P013_Bucles_(WHILE-DO WHILE-FOR)v0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//GilPulido


#include <iostream>
#include <string>
#include <locale>

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    // Usuarios y contraseñas correctas
    std::string usuario_correcto = "wolf123";
    std::string contrasena_correcta = "c123456";

    bool repetir = true;

    while (repetir)
    {
        std::string usuario;
        std::string contrasena;

        std::cout << "Bienvenido a los juegos del hambre\n";
        std::cout<< "Inicia sesion por favor\n";
        std::cout << "¿Cuál es tu nombre de usuario?\n";
        std::getline(std::cin, usuario);
        std::cout << "¿Cuál es tu contraseña?\n ";
        std::getline(std::cin, contrasena);

        if (usuario == usuario_correcto && contrasena == contrasena_correcta)
        {
            std::cout << "Bienvenido\n";
            std::cout << "Tu usuario y contraseña son correctos\n";
            std::cout << "Disfruta el juego\n";
            std::cout << "Quieres volver a iniciar sesion? 1-si 0-no\n";
            std::cin>>repetir;
        }
        else
        {

            std::cout << "Usuario o contraseña incorrectos. Por favor, inténtalo de nuevo.\n";
            std::cout << "quieres intentarlo de nuevo 1-si 0-no\n";
            std::cin >> repetir;
        }
    }

    return 0;
}