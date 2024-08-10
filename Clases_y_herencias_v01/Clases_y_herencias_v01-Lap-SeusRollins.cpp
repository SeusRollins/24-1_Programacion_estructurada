#include <iostream>
#include <string>
using namespace std;

class Atleta
{
    //private:
protected:
    int energia;
    float velocidad;
    int fuerza;
    string nombre;
public:
    void Setvelocidad(float v)
    {
        velocidad = v;
    }
    float getvelocidad()
    {
        return velocidad;
    }
    void Setenergia(int e)
    {
        energia = e;
    }
    int getenergia()
    {
        return energia;
    }
    void Setfuerza(int f)
    {
        fuerza = f;
    }
    int getfuerza()
    {
        return fuerza;
    }
    void Setnombre(string n)
    {
        nombre = n;
    }
    string getnombre()
    {
        return nombre;
    }
    void aumentable()
    {
        velocidad++;
        energia--;
    }
    // constructor genrico
    Atleta()
    {
        energia = 20;
        velocidad = 20;
        fuerza = 20;
        nombre = "generico";
    }
    // constructor especifico
    Atleta(int e, float v, int f, string n)
    {
        energia = e;
        velocidad = v;
        fuerza = f;
        nombre = n;
    }
    ~Atleta()
    {
        cout << nombre << " ha sido destruido" << endl;
    }
};

// herencia
class boxeador : public Atleta
{

    int victorias;
    int derrotas;
    int empates;
    int KO;
public:
    // constructor generico
    boxeador() : Atleta()
    {
        victorias = 0;
        derrotas = 0;
        empates = 0;
        KO = 0;
    }

    // constructor especifico
    boxeador(int e, float v, int f, string n, int g, int p, int emp, int k)
    {
        energia = e;
        velocidad = v;
        fuerza = f;
        nombre = n;
        victorias = g;
        derrotas = p;
        empates = emp;
        KO = k;
    }

    void setvictorias(int g)
    {
        victorias = 0;
    }
    int getvictorias()
    {
        return victorias;
    }
    void setderrotas(int p)
    {
        derrotas = 0;
    }
    int getderrotas()
    {
        return derrotas;
    }
    void setempates(int emp)
    {
        empates = 0;
    }
    int getempates()
    {
        return empates;
    }
    void setKO(int k)
    {
        KO = 0;
    }
    int getKO()
    {
        return KO;
    }

};

int main()
{
    // constructor especifico 
    Atleta Messi(150, 500.0, 70, "Leo");
    cout << Messi.getnombre() << endl;
    cout << "fuerza =" << Messi.getfuerza() << endl;
    cout << "velocidad =" << Messi.getvelocidad() << endl;
    cout << "energia =" << Messi.getenergia() << endl;

    cout << "--------------------------------------------- \n";

    // constructor generico
    Atleta pedro;
    cout << pedro.getnombre() << endl;
    cout << "fuerza =" << pedro.getfuerza() << endl;
    cout << "velocidad" << pedro.getvelocidad() << endl;
    cout << "energia" << pedro.getenergia() << endl;

    // new
    cout << "--------------------------------------------- \n";
    Atleta* pitbull = new Atleta(100, 100, 500, "pitbull cruz");
    pitbull->aumentable();
    cout << "nombre" << pitbull->getnombre() << endl;
    // destructor
    delete pitbull;

    cout << "--------------------------------------------- \n";

    Atleta* Daniel = new Atleta(200, 50, 800, "Daniel Carreon");
    Daniel->aumentable();
    cout << "nombre" << Daniel->getnombre() << endl;
    delete Daniel;

    cout << "--------------------------------------------- \n";

    Atleta* gilberto = new Atleta(300, 150, 500, "gilberto");
    gilberto->aumentable();
    cout << "nombre" << gilberto->getnombre() << endl;
    delete gilberto;

    // 3 genericos
    cout << "--------------------------------------------- \n";

    Atleta Diego;
    cout << Diego.getenergia() << endl;
    cout << "fuerza = " << Diego.getfuerza() << endl;
    cout << "velocidad" << Diego.getvelocidad() << endl;
    cout << "energia" << Diego.getenergia() << endl;

    cout << "--------------------------------------------- \n";

    Atleta Alberto;
    cout << Alberto.getnombre() << endl;
    cout << "fuerza = " << Alberto.getfuerza() << endl;
    cout << "valocidad" << Alberto.getvelocidad() << endl;
    cout << "energia" << Alberto.getenergia() << endl;

    cout << "--------------------------------------------- \n";

    Atleta jorge;
    cout << jorge.getnombre() << endl;
    cout << "fuerza = " << jorge.getfuerza() << endl;
    cout << "velocidad" << jorge.getvelocidad() << endl;
    cout << "energia" << jorge.getenergia() << endl;

    cout << "--------------------------------------------- \n";

    // 3 especificos

    Atleta luis(200, 300.0, 100, "luis");
    cout << luis.getnombre() << endl;
    cout << " fuerza = " << luis.getfuerza() << endl;
    cout << "velocidad" << luis.getvelocidad() << endl;
    cout << "energia" << luis.getenergia() << endl;

    cout << "---------------------------------------------- \n";

    Atleta andres(100, 150.0, 150, "andres");
    cout << andres.getnombre() << endl;
    cout << "fuerza = " << andres.getfuerza() << endl;
    cout << "velocidad" << andres.getvelocidad() << endl;
    cout << "energia" << andres.getenergia() << endl;

    cout << "---------------------------------------------- \n";

    Atleta jesus(300, 200.0, 300, "jesus");
    cout << jesus.getnombre() << endl;
    cout << "fuerza = " << jesus.getfuerza() << endl;
    cout << "velocidad" << jesus.getvelocidad() << endl;
    cout << "energia" << jesus.getenergia() << endl;

    cout << "---------------------------------------------- \n";


}