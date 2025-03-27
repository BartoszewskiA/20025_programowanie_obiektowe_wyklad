#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <cmath>

using namespace std;

const int ZYCIE = 100;
const int PUNKTY = 30;

class Cios
{
public:
    int atak_fizyczny;
    int atak_magiczny;
    bool podstepny_atak;
    Cios() : atak_fizyczny(0),
             atak_magiczny(0),
             podstepny_atak(false) {}
};

//--- klasa Postac ---//
class Postac
{
private:
    string imie;
    int zycie;
    int atak_fizyczny;
    int atak_magiczny;
    int obrona_fizyczna;
    int obrona_magiczna;

public:
    Postac(string IMIE) : imie(IMIE)
    {
        zycie = ZYCIE;
        int atak = round(PUNKTY * procentGauss(1, 3));
        int obrona = PUNKTY - atak;
        atak_fizyczny = round(atak * procentGauss(1, 3));
        atak_magiczny = atak - atak_fizyczny;
        obrona_fizyczna = round(obrona * procentGauss(1, 3));
        obrona_magiczna = obrona - obrona_fizyczna;
    }
    string getImie() { return imie; }
    bool czyZyje() { return zycie > 0; }
    int getZycie() { return zycie; }
    string przedstaw_sie();
    Cios zadaj_cios();
    bool przyjmij_cios(Cios cios);
    double procentGauss(int skupienie);              // <0,1)
    double procentGauss(int minimum, int skupienie); // <minimum/100 , 1)
};

// metody klasy Postac //

string Postac::przedstaw_sie()
{
    stringstream ss;
    ss << "Imie: " << imie << endl;
    ss << "Zycie: " << zycie << endl;
    ss << "Atak fizyczny: " << atak_fizyczny << endl;
    ss << "Atak magiczny: " << atak_magiczny << endl;
    ss << "Obrona fizyczna: " << obrona_fizyczna << endl;
    ss << "Obrona magiczna: " << obrona_magiczna << endl;
    return ss.str();
}

double Postac::procentGauss(int skupienie) // <0,1)
{
    double wynik = 0.0;
    for (int i = 0; i < skupienie; i++)
        wynik += rand() % 100;
    wynik /= skupienie;
    return wynik / 100.0;
}
double Postac::procentGauss(int minimum, int skupienie) // <minimum/100 , 1)
{
    double wynik = 0.0;
    for (int i = 0; i < skupienie; i++)
        wynik += rand() % (100 - minimum);
    wynik = wynik / skupienie + minimum;
    return wynik / 100.0;
}

Cios Postac::zadaj_cios()
{
    Cios cios;
    cios.atak_fizyczny = round(atak_fizyczny * procentGauss(20, 2));
    cios.atak_magiczny = round(atak_magiczny * procentGauss(20, 2));
    cios.podstepny_atak = (rand() % 100) < 20; // 20% szans na podstepny atak
    return cios;
}

bool Postac::przyjmij_cios(Cios cios)
{
    int obrazenia_fizyczne = 0;
    int obrazenia_magiczne = 0;
    if (cios.podstepny_atak)
    {
        obrazenia_fizyczne = cios.atak_fizyczny;
        obrazenia_magiczne = cios.atak_magiczny;
    }
    else
    {
        obrazenia_fizyczne = cios.atak_fizyczny - round(obrona_fizyczna * procentGauss(2));
        obrazenia_magiczne = cios.atak_magiczny - round(obrona_magiczna * procentGauss(2));
    }
    if (obrazenia_fizyczne < 0)
        obrazenia_fizyczne = 0;
    if (obrazenia_magiczne < 0)
        obrazenia_magiczne = 0;
    zycie -= (obrazenia_fizyczne + obrazenia_magiczne);
    return zycie > 0;
}
//--- koniec klasy Postac ---//
// --- funkcja programu głownego --- //
void ring(Postac &gracz, Postac &potwor)
{
    int max_rund = 100;
    Cios cios;
    while (gracz.czyZyje() && potwor.czyZyje() && max_rund-- > 0)
    {
        cios = gracz.zadaj_cios();
        potwor.przyjmij_cios(cios);
        cout << "Gracz zadaje cios " << gracz.getZycie() << endl;
        cios = potwor.zadaj_cios();
        gracz.przyjmij_cios(cios);
        cout << "Potwor zadaje cios " << potwor.getZycie() << endl;
    }
}

int main()
{
    srand(time(NULL)); // inicjalizacja generatora liczb losowych
    // Tworzenie obiektów Postac
    Postac gracz("Gracz");
    Postac potwor("Potwor");
    cout << gracz.przedstaw_sie() << endl;
    cout << potwor.przedstaw_sie() << endl;
    ring(gracz, potwor);
    cout << gracz.przedstaw_sie() << endl;
    cout << potwor.przedstaw_sie() << endl;
    return 0;
}