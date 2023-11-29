// Proyecto 2 - Historia Narrada tu historia  en la lucha libre
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
    int marca;
    bool repetir = true;
    while (repetir)
    {
        std::cout << "hola bienvenido a la World Wrestling Entertainment o mejor conocida como WWE\n";
        std::cout << "caual es tu Nombre?\n";
        std::getline(std::cin, nombre);
        std::cout << "hola " << nombre << std::endl;
        std::cout << "cual va a ser tu nombre de luchador?\n";
        std::getline(std::cin, nobreluchador);
        std::cout << "hola " << nobreluchador << " que genial nombre\n";
        std::cout << "tu obejtivo es combertirte en campeon o ser despedido en el intento\n";
        std::cout << "es hora de empezar tu histora\n";
        std::cout << "en  cual marca te gustaria debutar\n";
        std::cout << "1.-Raw,2.- SmackDonw, 3.-Nxt\n";
        std::cin >> marca;
        switch (marca)
        {
        case 1:
        {
            std::cout << "Bienvenido a Raw " << nobreluchador << " aqui comienza tu historia\n";
            std::cout << "para tu debut tienes 2 posibles luhas\n";
            std::cout << "1.-luchar contra el campeon , 0.- luchar en la celda infernal \n";
            std::cin >> decision;
            if (decision = true)
            {
                std::cout << "el campeon es  alguien dificil de vencer por eso es no le durate nada pero te ganaste el respeto del campeon\n";
                std::cout << "el campeon  te ofece su mano en señal de resto \n";
                std::cout << "1.- le das la mano , 0.- lo golpeas\n";
                std::cin >> decision;
                if (decision = true);
                {
                    std::cout << "el publico los acalama a ambos\n";
                    std::cout << "ahora tines la atencion de todos en la erena \n";
                    std::cout << "que vas hacer anete esta reacion?\n";
                    std::cout << "1.-pedirle una revancha, 0.-atacarlo y exigirle una revaancha\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "el campeon te acepta el reto\n";
                        std::cout << "ahora el te da eleguir el tipo de lucha en el cual se enfrenten\n";
                        std::cout << "1.-lucha de ultimo  hombre en pie , 0.-lucha extrema\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha fue intesa de pricio a fin llena de emociones\n";
                            std::cout << "la lucha parece que no tendra fin pero tu movimiento personal\n";
                            std::cout << "dicen lo contrario un remate y la cuenta empieza\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "4.........................................................\n";
                            std::cout << "5.......................................................\n";
                            std::cout << "6.........................................................\n";
                            std::cout << "7.......................................................\n";
                            std::cout << "8.........................................................\n";
                            std::cout << "9.......................................................\n";
                            std::cout << "10.........................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "la anea entera corea tu nombre mientras el ex campeon te da el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";

                        }
                        else
                        {
                            std::cout << "la lucha fue intesa de pricio a fin llena de emociones\n";
                            std::cout << "la lucha parece que no tendra fin pero tu movimiento personal\n";
                            std::cout << "dicen lo contrario un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "la anea entera corea tu nombre mientras el ex campeon te da el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }
                    }
                    else
                    {
                        std::cout << "el campeon acepta con una condicion que tu carrera este en juego\n";
                        std::cout << "que vas a hacer 1.- aceptar lucha normal, 0.- aceptar pero en una lucha sin descalificacion\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                            std::cout << "hasta que sin quere le da un golpe y el abrito queda inconciente\n";
                            std::cout << "entoces aprobechas para darle un golpe bajo\n";
                            std::cout << "luego procedes a golpearlo con el campeonato\n";
                            std::cout << "un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }
                        else
                        {
                            std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                            std::cout << "hasta le das un silletazo\n";
                            std::cout << "entoces aprobechas para darle un golpe bajo\n";
                            std::cout << "luego procedes a golpearlo con el campeonato\n";
                            std::cout << "un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }

                    }
                }
                if (decision = false)
                {
                    std::cout << "el publico explota en abucheos contra ti\n";
                    std::cout << "ahora tines la atencion de todos en la erena \n";
                    std::cout << "que vas hacer anete esta reacion?\n";
                    std::cout << "1.-tomar el campeonato,0.-pisar el campeonato y huir\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "despues de que te robaras el campeonato esto desato una lucha\n";
                        std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                        std::cout << "hasta que sin quere le da un golpe y el abrito queda inconciente\n";
                        std::cout << "entoces aprobechas para darle un golpe bajo\n";
                        std::cout << "luego procedes a golpearlo con el campeonato\n";
                        std::cout << "un remate y le haces la cuenta\n";
                        std::cout << "1.......................................................\n";
                        std::cout << "2.........................................................\n";
                        std::cout << "3.......................................................\n";
                        std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                        std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                        std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                        std::cout << "haz ganado el juego\n";
                    }
                    else
                    {
                        std::cout << "esta accion tiene enojada a la empresa quien lo considera una falta de respeto\n";
                        std::cout << "estas despedido\n";
                        std::cout << "\n";
                        std::cout << "GAME OVER\n";

                    }
                }
            }
            else
            {
                std::cout << "tu lucha ah sido muy complicada pero has sobrevivido\n";
                std::cout << "perdite tu lucha de debut y has salido muy herido\n";
                std::cout << "que haras ahora 1.- buscar una revancha, 0.-ver por tu salud\n";
                std::cin >> decision;
                if (decision = true)
                {
                    std::cout << "aun no estas al 100 pero te estan ofreciendo la revancha\n";
                    std::cout << "1.-acetar la revancha, 0.- rechazar la oferta\n";
                }
                else
                {
                    std::cout << "aun no estas al 100 pero te estan ofreciendo la revancha\n";
                    std::cout << "1.-acetar la revancha, 0.- rechazar la oferta\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "la lucha a sido fenomenal pero tu lesion se agrabo mucho mas\n";
                        std::cout << "por tu gran desenpeño se te otorgara una oportunidad por el campeonato\n";
                        std::cout << "que haras? 1.-aceptar la oportunidad 0,- preferir tu salud\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha ah sido epica el estadio se caia de la emocion\n";
                            std::cout << "la lucha fue cardiaca aguantaste todo y cuand escuchaste el sonar de la campana\n";
                            std::cout << "y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "Felicidades " << nobreluchador << " ahora eres el campeon\n";
                            std::cout << "Haz ganado el juego\n";


                        }
                        else
                        {
                            std::cout << "lamentablemente estas despedido\n";
                            std::cout << "\n";
                            std::cout << "GAME OVER\n";
                        }

                    }
                    else
                    {
                        std::cout << "a la empresa no le agrado tu actitud\n";
                        std::cout << "entoces lamentablemente estas despedido\n";
                        std::cout << "\n";
                        std::cout << "GAME OVER\n";


                    }
                    std::cout << "a la empresa no le agrado tu actitud\n";
                    std::cout << "entoces lamentablemente estas despedido\n";
                    std::cout << "\n";
                    std::cout << "GAME OVER\n";
                }
            }


            break;
        }
        case 2:
        {
            std::cout << "Bienvenido a SmackDonw " << nobreluchador << " aqui comienza tu historia\n";
            std::cout << "para tu debut tienes 2 posibles luhas\n";
            std::cout << "1.-luchar contra el campeon , 0.- luchar en la celda infernal \n";
            std::cin >> decision;
            if (decision = true)
            {
                std::cout << "el campeon es  alguien dificil de vencer por eso es no le durate nada pero te ganaste el respeto del campeon\n";
                std::cout << "el campeon  te ofece su mano en señal de resto \n";
                std::cout << "1.- le das la mano , 0.- lo golpeas\n";
                std::cin >> decision;
                if (decision = true);
                {
                    std::cout << "el publico los acalama a ambos\n";
                    std::cout << "ahora tines la atencion de todos en la erena \n";
                    std::cout << "que vas hacer anete esta reacion?\n";
                    std::cout << "1.-pedirle una revancha, 0.-atacarlo y exigirle una revaancha\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "el campeon te acepta el reto\n";
                        std::cout << "ahora el te da eleguir el tipo de lucha en el cual se enfrenten\n";
                        std::cout << "1.-lucha de ultimo  hombre en pie , 0.-lucha extrema\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha fue intesa de pricio a fin llena de emociones\n";
                            std::cout << "la lucha parece que no tendra fin pero tu movimiento personal\n";
                            std::cout << "dicen lo contrario un remate y la cuenta empieza\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "4.........................................................\n";
                            std::cout << "5.......................................................\n";
                            std::cout << "6.........................................................\n";
                            std::cout << "7.......................................................\n";
                            std::cout << "8.........................................................\n";
                            std::cout << "9.......................................................\n";
                            std::cout << "10.........................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "la anea entera corea tu nombre mientras el ex campeon te da el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";

                        }
                        else
                        {
                            std::cout << "la lucha fue intesa de pricio a fin llena de emociones\n";
                            std::cout << "la lucha parece que no tendra fin pero tu movimiento personal\n";
                            std::cout << "dicen lo contrario un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "la anea entera corea tu nombre mientras el ex campeon te da el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }
                    }
                    else
                    {
                        std::cout << "el campeon acepta con una condicion que tu carrera este en juego\n";
                        std::cout << "que vas a hacer 1.- aceptar lucha normal, 0.- aceptar pero en una lucha sin descalificacion\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                            std::cout << "hasta que sin quere le da un golpe y el abrito queda inconciente\n";
                            std::cout << "entoces aprobechas para darle un golpe bajo\n";
                            std::cout << "luego procedes a golpearlo con el campeonato\n";
                            std::cout << "un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }
                        else
                        {
                            std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                            std::cout << "hasta le das un silletazo\n";
                            std::cout << "entoces aprobechas para darle un golpe bajo\n";
                            std::cout << "luego procedes a golpearlo con el campeonato\n";
                            std::cout << "un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }

                    }
                }
                if (decision = false)
                {
                    std::cout << "el publico explota en abucheos contra ti\n";
                    std::cout << "ahora tines la atencion de todos en la erena \n";
                    std::cout << "que vas hacer anete esta reacion?\n";
                    std::cout << "1.-tomar el campeonato,0.-pisar el campeonato y huir\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "despues de que te robaras el campeonato esto desato una lucha\n";
                        std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                        std::cout << "hasta que sin quere le da un golpe y el abrito queda inconciente\n";
                        std::cout << "entoces aprobechas para darle un golpe bajo\n";
                        std::cout << "luego procedes a golpearlo con el campeonato\n";
                        std::cout << "un remate y le haces la cuenta\n";
                        std::cout << "1.......................................................\n";
                        std::cout << "2.........................................................\n";
                        std::cout << "3.......................................................\n";
                        std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                        std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                        std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                        std::cout << "haz ganado el juego\n";
                    }
                    else
                    {
                        std::cout << "esta accion tiene enojada a la empresa quien lo considera una falta de respeto\n";
                        std::cout << "estas despedido\n";
                        std::cout << "\n";
                        std::cout << "GAME OVER\n";

                    }
                }
            }
            else
            {
                std::cout << "tu lucha ah sido muy complicada pero has sobrevivido\n";
                std::cout << "perdite tu lucha de debut y has salido muy herido\n";
                std::cout << "que haras ahora 1.- buscar una revancha, 0.-ver por tu salud\n";
                std::cin >> decision;
                if (decision = true)
                {
                    std::cout << "aun no estas al 100 pero te estan ofreciendo la revancha\n";
                    std::cout << "1.-acetar la revancha, 0.- rechazar la oferta\n";
                }
                else
                {
                    std::cout << "aun no estas al 100 pero te estan ofreciendo la revancha\n";
                    std::cout << "1.-acetar la revancha, 0.- rechazar la oferta\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "la lucha a sido fenomenal pero tu lesion se agrabo mucho mas\n";
                        std::cout << "por tu gran desenpeño se te otorgara una oportunidad por el campeonato\n";
                        std::cout << "que haras? 1.-aceptar la oportunidad 0,- preferir tu salud\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha ah sido epica el estadio se caia de la emocion\n";
                            std::cout << "la lucha fue cardiaca aguantaste todo y cuand escuchaste el sonar de la campana\n";
                            std::cout << "y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "Felicidades " << nobreluchador << " ahora eres el campeon\n";
                            std::cout << "Haz ganado el juego\n";


                        }
                        else
                        {
                            std::cout << "lamentablemente estas despedido\n";
                            std::cout << "\n";
                            std::cout << "GAME OVER\n";
                        }

                    }
                    else
                    {
                        std::cout << "a la empresa no le agrado tu actitud\n";
                        std::cout << "entoces lamentablemente estas despedido\n";
                        std::cout << "\n";
                        std::cout << "GAME OVER\n";


                    }
                    std::cout << "a la empresa no le agrado tu actitud\n";
                    std::cout << "entoces lamentablemente estas despedido\n";
                    std::cout << "\n";
                    std::cout << "GAME OVER\n";
                }
            }

            break;
        }
        case 3:
        {
            std::cout << "Bienvenido a Nxt " << nobreluchador << " aqui comienza tu historia\n";
            std::cout << "para tu debut tienes 2 posibles luhas\n";
            std::cout << "1.-luchar contra el campeon , 0.- luchar en la celda infernal \n";
            std::cin >> decision;
            if (decision = true)
            {
                std::cout << "el campeon es  alguien dificil de vencer por eso es no le durate nada pero te ganaste el respeto del campeon\n";
                std::cout << "el campeon  te ofece su mano en señal de resto \n";
                std::cout << "1.- le das la mano , 0.- lo golpeas\n";
                std::cin >> decision;
                if (decision = true);
                {
                    std::cout << "el publico los acalama a ambos\n";
                    std::cout << "ahora tines la atencion de todos en la erena \n";
                    std::cout << "que vas hacer anete esta reacion?\n";
                    std::cout << "1.-pedirle una revancha, 0.-atacarlo y exigirle una revaancha\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "el campeon te acepta el reto\n";
                        std::cout << "ahora el te da eleguir el tipo de lucha en el cual se enfrenten\n";
                        std::cout << "1.-lucha de ultimo  hombre en pie , 0.-lucha extrema\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha fue intesa de pricio a fin llena de emociones\n";
                            std::cout << "la lucha parece que no tendra fin pero tu movimiento personal\n";
                            std::cout << "dicen lo contrario un remate y la cuenta empieza\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "4.........................................................\n";
                            std::cout << "5.......................................................\n";
                            std::cout << "6.........................................................\n";
                            std::cout << "7.......................................................\n";
                            std::cout << "8.........................................................\n";
                            std::cout << "9.......................................................\n";
                            std::cout << "10.........................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "la anea entera corea tu nombre mientras el ex campeon te da el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";

                        }
                        else
                        {
                            std::cout << "la lucha fue intesa de pricio a fin llena de emociones\n";
                            std::cout << "la lucha parece que no tendra fin pero tu movimiento personal\n";
                            std::cout << "dicen lo contrario un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "la anea entera corea tu nombre mientras el ex campeon te da el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }
                    }
                    else
                    {
                        std::cout << "el campeon acepta con una condicion que tu carrera este en juego\n";
                        std::cout << "que vas a hacer 1.- aceptar lucha normal, 0.- aceptar pero en una lucha sin descalificacion\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                            std::cout << "hasta que sin quere le da un golpe y el abrito queda inconciente\n";
                            std::cout << "entoces aprobechas para darle un golpe bajo\n";
                            std::cout << "luego procedes a golpearlo con el campeonato\n";
                            std::cout << "un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }
                        else
                        {
                            std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                            std::cout << "hasta le das un silletazo\n";
                            std::cout << "entoces aprobechas para darle un golpe bajo\n";
                            std::cout << "luego procedes a golpearlo con el campeonato\n";
                            std::cout << "un remate y le haces la cuenta\n";
                            std::cout << "1.......................................................\n";
                            std::cout << "2.........................................................\n";
                            std::cout << "3.......................................................\n";
                            std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                            std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                            std::cout << "haz ganado el juego\n";
                        }

                    }
                }
                if (decision = false)
                {
                    std::cout << "el publico explota en abucheos contra ti\n";
                    std::cout << "ahora tines la atencion de todos en la erena \n";
                    std::cout << "que vas hacer anete esta reacion?\n";
                    std::cout << "1.-tomar el campeonato,0.-pisar el campeonato y huir\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "despues de que te robaras el campeonato esto desato una lucha\n";
                        std::cout << "la lucha es rapida y dinamica el campeon tiene todo controlado\n";
                        std::cout << "hasta que sin quere le da un golpe y el abrito queda inconciente\n";
                        std::cout << "entoces aprobechas para darle un golpe bajo\n";
                        std::cout << "luego procedes a golpearlo con el campeonato\n";
                        std::cout << "un remate y le haces la cuenta\n";
                        std::cout << "1.......................................................\n";
                        std::cout << "2.........................................................\n";
                        std::cout << "3.......................................................\n";
                        std::cout << "y se escucha y el nuevo campeon mundial es " << nobreluchador << std::endl;
                        std::cout << "le arrebatas el campeonato al albrito y sale estre el publico con el campeonato\n";
                        std::cout << "felicidades ahora eres el nuevo campeon mundial\n";
                        std::cout << "haz ganado el juego\n";
                    }
                    else
                    {
                        std::cout << "esta accion tiene enojada a la empresa quien lo considera una falta de respeto\n";
                        std::cout << "estas despedido\n";
                        std::cout << "\n";
                        std::cout << "GAME OVER\n";

                    }
                }
            }
            else
            {
                std::cout << "tu lucha ah sido muy complicada pero has sobrevivido\n";
                std::cout << "perdite tu lucha de debut y has salido muy herido\n";
                std::cout << "que haras ahora 1.- buscar una revancha, 0.-ver por tu salud\n";
                std::cin >> decision;
                if (decision = true)
                {
                    std::cout << "aun no estas al 100 pero te estan ofreciendo la revancha\n";
                    std::cout << "1.-acetar la revancha, 0.- rechazar la oferta\n";
                }
                else
                {
                    std::cout << "aun no estas al 100 pero te estan ofreciendo la revancha\n";
                    std::cout << "1.-acetar la revancha, 0.- rechazar la oferta\n";
                    std::cin >> decision;
                    if (decision = true)
                    {
                        std::cout << "la lucha a sido fenomenal pero tu lesion se agrabo mucho mas\n";
                        std::cout << "por tu gran desenpeño se te otorgara una oportunidad por el campeonato\n";
                        std::cout << "que haras? 1.-aceptar la oportunidad 0,- preferir tu salud\n";
                        std::cin >> decision;
                        if (decision = true)
                        {
                            std::cout << "la lucha ah sido epica el estadio se caia de la emocion\n";
                            std::cout << "la lucha fue cardiaca aguantaste todo y cuand escuchaste el sonar de la campana\n";
                            std::cout << "y el nuevo campeon mundial es " << nobreluchador << std::endl;
                            std::cout << "Felicidades " << nobreluchador << " ahora eres el campeon\n";
                            std::cout << "Haz ganado el juego\n";


                        }
                        else
                        {
                            std::cout << "lamentablemente estas despedido\n";
                            std::cout << "\n";
                            std::cout << "GAME OVER\n";
                        }

                    }
                    else
                    {
                        std::cout << "a la empresa no le agrado tu actitud\n";
                        std::cout << "entoces lamentablemente estas despedido\n";
                        std::cout << "\n";
                        std::cout << "GAME OVER\n";


                    }
                    std::cout << "a la empresa no le agrado tu actitud\n";
                    std::cout << "entoces lamentablemente estas despedido\n";
                    std::cout << "\n";
                    std::cout << "GAME OVER\n";
                }
            }

            break;
        }
        default:
            break;
        }

        break;
        std::cout << "Deseas volver a jugar? 0.- NO 1.- SI:\n";
        std::cin >> repetir;
        system("cls");

    }
    return 0;
}
