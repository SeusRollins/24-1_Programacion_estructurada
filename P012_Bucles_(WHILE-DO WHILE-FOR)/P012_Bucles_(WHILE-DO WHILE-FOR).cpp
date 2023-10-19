// P012_Bucles_(WHILE-DO WHILE-FOR).cpp 
//GilPulido

#include <iostream>
#include <locale>
#include <string>
#include <Windows.h>


int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string respuesta;
    int i = 100;
    bool repetir = false;
    while (repetir);
    {
        std::cout << "Hola Bienvenido al infierno de los Dioses, en este juego tienes 3 vidas \n" <<
            "Donde tus son tu salvacion o tu condena dependen de ti\n"
            << "Quieres jugar? \n" << "s = Si, n = NO \n";
        std::cin >> respuesta;
        system("cls");
        if (respuesta == "s")
        {
            std::cout << "Vaya veo que eres valienten\n";
            std::cout << "Un perro infernal esta justo al frente de ti\n";
            std::cout << "Quieres enfrentarte a el : s/n \n";
            std::cin >> respuesta;
            system("cls");
            for (i = 100; i >= 0; i--)
            {
                std::cout << "contador" << i << std::endl;
                system("cls");
            }
            if (respuesta == "s")
            {
                std::cout << "La valentia es algo que se respetan entre dioses  \n" <<
                    "Pero como no eres un dios pierdes una vida\n" << 
                    "ahora tienes 2 vidas \n";
                std::cout << "ahora estas de frente de un angel maldito\n";
                std::cout << "te enfrentas a el  s/n \n";
                std::cin >> respuesta;
                system("cls");
                for (i = 100; i >= 0; i--)
                {
                    std::cout <<"contador " << i << std::endl;
                    system("cls");
                }
                if (respuesta == "s")
                {
                    std::cout << "Vaya veo que eres muy valiente \n";
                    std::cout << "pero el angel infernal fue mas fuerte te mato\n";
                    std::cout << "ahora te queda 1 vidad\n";
                    std::cout << "tu opciones y posibilidades son pocas\n";
                    std::cout << "Deseas continuar, s/n \n";
                    std::cin >> respuesta;
                    system("cls");
                    for (i = 100; i >= 0; i--)
                    {
                        std::cout << "contador " << i << std::endl;
                        system("cls");
                    }
                    if (respuesta == "s")
                    {
                        std::cout << "tu valentia es increible\n";
                        std::cout << "lamentblemente  en este juego tu unico destino es morir\n";
                        std::cout << "pero tu mueres como un dios , como un heroe, como una leyenda\n";
                        std::cout << "has perdido pero tienes mi respeto\n";
                        std::cout << "pierdes la vida ante un demonio\n";
                        std::cout << "Te gusto el juego ? s/n \n";
                        std::cin >> respuesta;


                        for (i = 100; i >= 0; i--)
                        {
                            std::cout << "contador " << i << std::endl;
                            system("cls");
                            std::cout << "GameOver\n";
                        }
                    }
                    else
                    {
                        std::cout << "fuiste muy valiente pero al final te falto valor\n";
                        std::cout << "has sido asesinado por un demonio\n";
                        std::cout << "Game Over/n";
                    }
                    for (i = 100; i >= 0; i--)
                    {
                        std::cout << "contador " << i << std::endl;
                        system("cls");
                        std::cout << "GameOver\n";
                    }
                }
                else
                {
                    std::cout << "Al principio fuiste valiente pero la covardia no es aceptada \n";
                    std::cout << "entre dioses y demenoios.\n";
                    std::cout << "asi que pierdes tus 2 vidas restantes\n";
                    std::cout << "Game Over\n";
                    system("cls");

                }
            }
            else
            {
                std::cout << "puedes pensar que has elegido saviamente pero te equivocaste \n" << "Perdiste todas tus vidas restantes \n";
                std::cout << "Game Over\n";
                system("cls");
            }
        }
        else
        {
            std::cout << "pierdes tus 3 vidas por cobarde \n";
            std::cout << "El infierno de los dioses no es para todos\n";
            std::cout << "Game Over\n";
            system("cls");
        }
        std::cout << "Deseas volver a jugar? 0.- NO 1.-SI: \n";
        std::cin >> repetir;
        system("cls");

    } 
    system("cls");
    return 0;

   
}
