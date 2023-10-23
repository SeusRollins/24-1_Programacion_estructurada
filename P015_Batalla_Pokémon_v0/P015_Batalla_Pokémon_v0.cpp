// P015_Batalla_Pokémon_v0.cpp
//GilPulido

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <locale>

class Pokemon {
private:
    std::string name;
    int hp;
    int attack;
    int defense;
    

public:
    Pokemon(std::string n, int h, int a, int d) : name(n), hp(h), attack(a), defense(d) {}

    void takeDamage(int damage) {
        hp -= damage;
    }

    bool isFainted() {
        return hp <= 0;
    }

    std::string getName() {
        return name;
    }

    int getHP() {
        return hp;
    }
};

int main() {
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    bool repetir = true;

    srand(static_cast<unsigned>(time(nullptr)));
    while (repetir)
    {

    
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

    std::cout << "Has elegido a " << usuarioPokemon.getName() << "." << std::endl;

    while (!usuarioPokemon.isFainted() && !oponentePokemon.isFainted()) {
        int userAttack;
        int opponentAttack = rand() % oponentePokemon.getHP();

        std::cout << "Selecciona un ataque para " << usuarioPokemon.getName() << " (1. Ataque rápido, 2. Ataque fuerte): ";
        std::cin >> userAttack;

        int userDamage = (userAttack == 1) ? usuarioPokemon.getHP() / 2 : usuarioPokemon.getHP();
        int opponentDamage = rand() % oponentePokemon.getHP();

        oponentePokemon.takeDamage(userDamage);
        usuarioPokemon.takeDamage(opponentDamage);

        std::cout << usuarioPokemon.getName() << " ataca a " << oponentePokemon.getName() << " con un ataque de " << userDamage << " puntos." << std::endl;
        std::cout << oponentePokemon.getName() << " tiene " << oponentePokemon.getHP() << " puntos de vida restantes." << std::endl;

        if (oponentePokemon.isFainted()) {
            std::cout << oponentePokemon.getName() << " se ha debilitado. " << usuarioPokemon.getName() << " gana la batalla." << std::endl;
            break;
        }

        std::cout << oponentePokemon.getName() << " ataca a " << usuarioPokemon.getName() << " con un ataque de " << opponentDamage << " puntos." << std::endl;
        std::cout << usuarioPokemon.getName() << " tiene " << usuarioPokemon.getHP() << " puntos de vida restantes." << std::endl;

        if (usuarioPokemon.isFainted()) {
            std::cout << usuarioPokemon.getName() << " se ha debilitado. " << oponentePokemon.getName() << " gana la batalla." << std::endl;
            break;
        }
    }
    std::cout << "Deseas volver a jugar? 0.- NO 1.- SI: ";
    std::cin >> repetir;
    system("cls");
    }
    return 0;
}
