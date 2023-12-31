// P011_Condicionales_v0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//GilPulido

#include <iostream>
#include <string>
#include <locale>

int main() {
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Piensa en un deporte (fútbol, baloncesto, tenis, béisbol, natación, Lucha libre, futbol americano, voleibol)." << std::endl;
    std::cout << "Por favor, responde 's' o 'n' a las preguntas." << std::endl;
    std::string respuesta;
    bool repetir = true;

    while (repetir)
    {


        // Pregunta 1
        std::cout << "¿Se juega con una pelota? (s/n): ";
        std::cin >> respuesta;

        if (respuesta == "s") {
            // Pregunta 2
            std::cout << "¿Se juega en equipo? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == "s") {
                // Pregunta 3
                std::cout << "¿Se juega en un campo grande? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == "s") {
                    // Pregunta 4
                    std::cout << "¿Se juega con las manos y los pies? (s/n): ";
                    std::cin >> respuesta;

                    if (respuesta == "s") {
                        // Pregunta 5
                        std::cout << "¿Es un deporte acuático? (s/n): ";
                        std::cin >> respuesta;

                        if (respuesta == "s") {
                            std::cout << "Estoy pensando en la natación." << std::endl;
                        }
                        else {
                            std::cout << "Estoy pensando en el baloncesto." << std::endl;
                        }
                    }
                    else {
                        std::cout << "Estoy pensando en el fútbol." << std::endl;
                    }
                }
                else {
                    // Pregunta 6
                    std::cout << "¿Se juega en una cancha con red? (s/n): ";
                    std::cin >> respuesta;

                    if (respuesta == "s") {
                        std::cout << "Estoy pensando en el voleibol." << std::endl;
                    }
                    else {
                        std::cout << "Estoy pensando en el tenis." << std::endl;
                    }
                }
            }
            else {
                // Pregunta 7
                std::cout << "¿Se juega con un bate? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == "s") {
                    std::cout << "Estoy pensando en el béisbol." << std::endl;
                }
                else {
                    std::cout << "Estoy pensando en el Lucha libre." << std::endl;
                }
            }
        }
        else {
            // Pregunta 8
            std::cout << "¿Se juega con un balón ovalado? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == "s") {
                std::cout << "Estoy pensando en futbol americano." << std::endl;
            }
            else {
                std::cout << "No puedo adivinar el deporte en el que estás pensando." << std::endl;
            }
        }

       
        std::cout << "Deseas que te adivine otro deporte? 0.- NO 1.- SI: ";
        std::cin >> repetir;
        system("cls");

    }
    return 0;

}
