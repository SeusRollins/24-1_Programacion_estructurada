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

    bool repetir = true;

    while (repetir)
    {
        std::string usuario;
        std::string contrasena;

        std::cout << "Bienvenido a los juegos del hambre\n ";
        std::cout << "Inicia sesión por favor\n ";
        std::cout << "¿Cuál es tu nombre de usuario?\n";
        std::cin >> usuario;

        std::cout << "¿Cuál es tu contraseña?\n ";
        std::cin >> contrasena;

        if (usuario == usuario_correcto && contrasena == contrasena_correcta)
        {
            std::cout << "Bienvenido\n";
            std::cout << "Tu usuario y contraseña son correctos\n";
            std::cout << "Disfruta el juego\n";
            repetir = false; 
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