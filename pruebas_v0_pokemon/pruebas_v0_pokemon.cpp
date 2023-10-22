#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <locale>

class Pokemon {
public:
    string name;
    int hp;
    int attack;
    int defense;

    Pokemon(string n, int h, int a, int d) : name(n), hp(h), attack(a), defense(d) {}

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
    cin >> userChoice;

    Pokemon usuarioPokemon("Pikachu", 50, 10, 5);
    Pokemon oponentePokemon("Charmander", 60, 8, 7);

    if (userChoice == 2) {
        userPokemon = Pokemon("Charmander", 50, 10, 5);
        opponentPokemon = Pokemon("Pikachu", 60, 8, 7);
    }

    cout << "Has elegido a " << userPokemon.name << "." << endl;

    while (!userPokemon.isFainted() && !opponentPokemon.isFainted()) {
        int userAttack;
        int opponentAttack = rand() % opponentPokemon.attack;

        cout << "Selecciona un ataque para " << userPokemon.name << " (1. Ataque rápido, 2. Ataque fuerte): ";
        cin >> userAttack;

        int userDamage = (userAttack == 1) ? userPokemon.attack / 2 : userPokemon.attack;
        int opponentDamage = rand() % opponentPokemon.attack;

        opponentPokemon.takeDamage(userDamage);
        userPokemon.takeDamage(opponentDamage);

        cout << userPokemon.name << " ataca a " << opponentPokemon.name << " con un ataque de " << userDamage << " puntos." << endl;
        cout << opponentPokemon.name << " tiene " << opponentPokemon.hp << " puntos de vida restantes." << endl;

        if (opponentPokemon.isFainted()) {
            cout << opponentPokemon.name << " se ha debilitado. " << userPokemon.name << " gana la batalla." << endl;
            break;
        }

        cout << opponentPokemon.name << " ataca a " << userPokemon.name << " con un ataque de " << opponentDamage << " puntos." << endl;
        cout << userPokemon.name << " tiene " << userPokemon.hp << " puntos de vida restantes." << endl;

        if (userPokemon.isFainted()) {
            cout << userPokemon.name << " se ha debilitado. " << opponentPokemon.name << " gana la batalla." << endl;
            break;
        }
    }

    return 0;
}
