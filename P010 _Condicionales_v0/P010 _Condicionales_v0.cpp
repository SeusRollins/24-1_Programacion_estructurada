// P010 _Condicionales_v0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    //usuarios correctos
    std::string usuario_correcto = "usuario123";
    std::string contrasena_correcta = "contraseña123";

    std::string usuario;
    std::string contrasena;

    // pedir datos al usuario   
    std::cout << "bienvenido a los juegos del hambre\n";
    std::cout << "inicia sesion por favor\n";
    std::cout << "cual es tu nombre de usuario\n";
    std::cin >> usuario;
    std::cout << "cual es tu contraseña\n";
    std::cin >> contrasena;

    if (usuario == usuario_correcto && contrasena == contrasena_correcta)
    {
        std::cout << "bienvenido\n";
        std::cout << "tu usuario y contraseña son correctos\n";
        std::cout << "disfruta el juego\n";

    }
    else
    {
        std::cout << "tu usuario o tu contraseña estan equivocado\n";
    }
    return 0;
}

