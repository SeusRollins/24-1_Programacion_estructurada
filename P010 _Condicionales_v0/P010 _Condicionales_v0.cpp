// P010 _Condicionales_v0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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

    bool seguir = true;

    do
    {
        std::string usuario;
        std::string contrasena;

        std::cout << "Bienvenido a los juegos del hambre\n";
        std::cout << "Inicia sesión por favor\n";
        std::cout << "¿Cuál es tu nombre de usuario\n";
        std::cin >> usuario;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "¿Cuál es tu contraseña\n";
        std::getline(std::cin, contrasena);

        if (usuario == usuario_correcto && contrasena == contrasena_correcta)
        {
            std::cout << "Bienvenido\n";
            std::cout << "Tu usuario y contraseña son correctos\n";
            std::cout << "Disfruta el juego\n";
            seguir = false;     
        }
        else
        {
            std::cout << "Tu usuario o tu contraseña están equivocados\n";
            std::cout << "¿Deseas repetir tu usuario y contraseña? 0 - NO 1 - SI: ";
            std::cin >> seguir;
        }
    } while (seguir);

    return 0;
}
