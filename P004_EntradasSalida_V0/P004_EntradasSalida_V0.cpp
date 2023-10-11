// P004_EntradasSalida_V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Gilberto Pulido
//Realizar un consultorio médico el cual solicite
//3 bool, 2 string, 1 char, 2 int, 1 float, Al final te entrega tu IMC


#include <iostream>
#include<locale.h>
#include "string"
int main()
{
    setlocale(LC_ALL, "es_Mx.UTF-8");
    bool sintoma1, sintoma2, sintoma3;
    std::string nombre;
    std::string Relato;
    bool sexo;
    int edad;
    int peso;
    float altura;
    float IMC;

    std::cout << "Bienvenido a el consultorio casi mueres " << std::endl;
    std::cout << "hola soy el doctor casi mueres " << std::endl;
    std::cout << "donde es un gusto atenderlo cuano casi muere" << std::endl;
    std::cout << "Tienes friebre 1 es si 0 es no " << std::endl;
    std::cin >> sintoma1;
    std::cout << "tienes Dorlo de cabeza 1 es si 0 es no" << std::endl;
    std::cin >> sintoma2;
    std::cout << "Tienes dolor de cuerpo 1 es si 0 es no" << std::endl;
    std::cin >> sintoma3;
    std::cout << "cual es tu sexo 1-hombre 0- mujer"<<std::endl;
    std::cin >> sexo;
    std::cin.ignore();
    std::cout << "Cual es tu Nombre" << std::endl << std::endl;
    std::getline(std::cin, nombre);
    std::cout << "cuentame desde cuando te sientes asi " << std::endl;
    std::getline(std::cin, Relato);
    std::cout << "Cual es tu edad " << std::endl;
    std::cin >> edad;
    std::cout << "cual es tu peso " << std::endl;
    std::cin >> peso;
    std::cout << "cuales tu altura " << std::endl;
    std::cin >> altura;
    IMC = peso / (altura * altura);
    std::cout << "tu indice de masa corporal " << IMC << std::endl;

  





}
