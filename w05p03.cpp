#include <iostream>
#include <sstream>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    Osoba(string imie = "Jan", string nazwisko = "Kowalski", int wiek = 30) : imie(imie), nazwisko(nazwisko), wiek(wiek) {}
    void setImie(string imie) { this->imie = imie; }
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
    void setWiek(int wiek) { this->wiek = wiek; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek() { return wiek; }
    string toString()
    {
        stringstream temp;
        temp << imie << " " << nazwisko << " " << wiek;
        return temp.str();
    }
};


bool porownaj(Osoba &osoba1, Osoba &osoba2)
{
    if(osoba1.getImie() == osoba2.getImie() && osoba1.getNazwisko() == osoba2.getNazwisko() && osoba1.getWiek() == osoba2.getWiek())
    {
        return true;
    }
    return false;
}

int main()
{
    Osoba ktos;
    Osoba ktos2("Adam", "Kowalski", 30);

    porownaj(ktos, ktos2) ? cout << "Takie same" : cout << "Rozne";

    return 0;
}