// p003_Variables_v0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>


int main()
{
    //Variables
    //Tipo - Nombre - Inicialización
    bool mi_primer_booleano = true;
    int mi_primer_entero = 0;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenacaracteres[100] = "Hola Bro";
    std::string mi_primer_string = "Alo Bro";

    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buen dia espero que tengas un lindo dia Bro";
    std::cout << "En el booleano tienes guardado: " << mi_primer_booleano << std::endl;
    std::cout << "En el entero tienes guardado: " << mi_primer_entero << std::endl;
    std::cout << "En el flotante tienes guardado: " << mi_primer_flotante << std::endl;
    std::cout << "En el caracter tienes guardado: " << mi_primer_caracter << std::endl;
    std::cout << "En la cadena tienes guardado: " << mi_primer_cadenacaracteres << std::endl;
    std::cout << "En el string tienes guardado: " << mi_primer_string << std::endl;

    //Solicitar al usuario cambios
    std::cout << "usuario dame por favor un 0 o 1;" << std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado: " << mi_primer_booleano << std::endl;

    //Solicitar al usuario 
    //realizar operaciones
    float a, b, c;
    a = 10;
    b = 5;
    c = a / b;
    std::cout << "el resultado de la divicion es;" << c << std::endl;
    c = a + b;
    std::cout << "el resultado de la suma es;" << c << std::endl;
    c = a * b;
    std::cout << "el resultado de la multiplicacion;" << c << std::endl;
    c = a - b;
    std::cout << "el resultado de la resta es;" << c << std::endl;
    

}