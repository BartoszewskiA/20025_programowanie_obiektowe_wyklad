#include <iostream>

using namespace std;

class Produkt {
private:
    string nazwa;
    string * opis; // wskaźnik do opisu
public:
    Produkt(string nazwa, string o) : nazwa(nazwa) 
    {
        opis = new string; // dynamiczna alokacja pamięci
        *opis = o;  // przypisanie wartości do wskaźnika
    }
    Produkt(const Produkt &wzorzec) // konstruktor kopiujący
    {
        nazwa = wzorzec.nazwa; // kopiowanie nazwy
        opis = new string; // dynamiczna alokacja pamięci
        *opis = *(wzorzec.opis); // przypisanie wartości do wskaźnika
    }
    ~Produkt() {
        delete opis; // zwolnienie pamięci
    }
    void wyswietl() {
        cout << "Nazwa: " << nazwa << ", Opis: " << *opis << endl;
    }
    void setOpis(string o) {
        *opis = o; // zmiana opisu
    }
    void setNazwa(string n) {
        nazwa = n; // zmiana nazwy
    }
};
int main()
{
    Produkt p1("Laptop", "Wysokiej jakości laptop z procesorem Intel i 16GB RAM");
    Produkt p2=p1;
    p1.setNazwa("Laptop HP");
    p1.setOpis("Laptop HP z procesorem Intel i 16GB RAM");
    p1.wyswietl();
    p2.wyswietl();
    return 0;
}