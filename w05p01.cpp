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


void RODO(Osoba &ktos) //to nie jest metoda klasy
{
    string imie = ktos.getImie();
    string nazwisko = ktos.getNazwisko();
    for(int i=1; i<imie.length(); i++)
    {
        imie[i] = '*';
    }
    for(int i=1; i<nazwisko.length(); i++)
    {
        nazwisko[i] = '*';
    }
    cout << imie << " " << nazwisko << " " << ktos.getWiek() << endl;
    ktos.setImie(imie);
    ktos.setNazwisko(nazwisko);
}

int main()
{
    Osoba osoba1("Stanislaw", "Nowak", 25);
    cout << osoba1.toString() << endl;
    RODO(osoba1);
    cout << osoba1.toString() << endl;
    return 0;
}