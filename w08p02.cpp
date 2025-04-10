#include <iostream>

using namespace std;

class Osoba
{
public:
    string imie;
    string nazwisko;
    static int licznik;

    Osoba(string imie, string nazwisko) : imie(imie), nazwisko(nazwisko)
    {
        ++licznik;
    }
    ~Osoba()
    {
        licznik--;
    }
};

int Osoba::licznik = 0;

int main()
{
    Osoba *ktos_1 = new Osoba("Jan", "Kowalski");
    Osoba *ktos_2 = new Osoba("Anna", "Nowak");
    delete ktos_1; // Usuwamy obiekt ktos_1, ale licznik nie zmienia się

    Osoba *ktos_3 = new Osoba("Piotr", "Zielinski");

    cout << "rekordow w bazie: " << ktos_1->licznik << endl;

    // delete ktos_1;
    delete ktos_2;
    delete ktos_3;

    cout << "rekordow w bazie: " << Osoba::licznik;
    return 0;
}