#include <iostream>

using namespace std;

class Osoba {
    public:
    int ID;
    string imie;
    string nazwisko;
    static int licznik;

    Osoba(string imie, string nazwisko):imie(imie), nazwisko(nazwisko) 
    {
        ID=++licznik;
    }
};

int Osoba::licznik = 0;

int main()
{
    Osoba ktos_1("Jan", "Kowalski");  
    Osoba ktos_2("Anna", "Nowak");
    Osoba ktos_3("Piotr", "Zielinski");


    cout<<"rekordow w bazie: "<<ktos_1.licznik<<endl; 
    cout<<"ID ktos_1: "<<ktos_1.ID<<endl;
    cout<<"ID ktos_2: "<<ktos_2.ID<<endl;
    cout<<"ID ktos_3: "<<ktos_3.ID<<endl;

    return 0;
}