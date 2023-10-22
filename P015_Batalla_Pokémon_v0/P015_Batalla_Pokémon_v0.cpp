// P015_Batalla_Pokémon_v0.cpp
//GilPulido

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <locale>

class Pokemon {
public:
    std::string name;
    int hp;
    int attack;
    int defense;

    Pokemon(string, int h, int a, int d) : name(n), hp(h), attack(a), defense(d) {}

    void takeDamage(int damage) {
        hp -= damage;
    }

    bool isFainted() {
        return hp <= 0;
    }
};

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");

    srand(static_cast<unsigned>(time(nullptr)));

    std::cout << "Elige tu Pokémon:\n";
    std::cout << "1. Pikachu\n";
    std::cout << "2. Charmander\n";

    int userChoice;
    std::cin >> userChoice;

    Pokemon usuarioPokemon("Pikachu", 50, 10, 5);
    Pokemon oponentePokemon("Charmander", 60, 8, 7);

    if (userChoice == 2) {
        usuarioPokemon = Pokemon("Charmander", 50, 10, 5);
        oponentePokemon = Pokemon("Pikachu", 60, 8, 7);
    }

    std::cout << "Has elegido a " << usuarioPokemon.name << "." << std::endl;

    while (!usuarioPokemon.isFainted() && !oponentePokemon.isFainted()) {
        int userAttack;
        int opponentAttack = rand() % oponentePokemon.attack;

        std::cout << "Selecciona un ataque para " << usuarioPokemon.name << " (1. Ataque rápido, 2. Ataque fuerte): ";
        std::cin >> userAttack;

        int userDamage = (userAttack == 1) ? usuarioPokemon.attack / 2 : usuarioPokemon.attack;
        int opponentDamage = rand() % oponentePokemon.attack;

        oponentePokemon.takeDamage(userDamage);
        usuarioPokemon.takeDamage(opponentDamage);

        std::cout << usuarioPokemon.name << " ataca a " << oponentePokemon.name << " con un ataque de " << userDamage << " puntos." << std::endl;
        std::cout << oponentePokemon.name << " tiene " << oponentePokemon.hp << " puntos de vida restantes." << std::endl;

        if (oponentePokemon.isFainted()) {
            std::cout << oponentePokemon.name << " se ha debilitado. " << usuarioPokemon.name << " gana la batalla." << std::endl;
            break;
        }

        std::cout << oponentePokemon.name << " ataca a " << usuarioPokemon.name << " con un ataque de " << opponentDamage << " puntos." << std::endl;
        std::cout << usuarioPokemon.name << " tiene " << usuarioPokemon.hp << " puntos de vida restantes." << std::endl;

        if (usuarioPokemon.isFainted()) {
            std::cout << usuarioPokemon.name << " se ha debilitado. " << oponentePokemon.name << " gana la batalla." << std::endl;
            break;
        }
    }

    return 0;
}
