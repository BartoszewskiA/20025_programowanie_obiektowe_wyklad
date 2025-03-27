#include <iostream>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;
public:
    void wizytowka()
    {
        cout << "Imie: " << imie << endl
             << "Nazwisko: " << nazwisko << endl
             << "Wiek: " << wiek << endl;
    }
    void pobierz_dane()
    {
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj wiek: ";
        cin >> wiek;
    }
};

int main()
{
    Osoba ktos;
    // ktos.imie = "Jan";          // przypisanie wartości do pola imie
    // ktos.nazwisko = "Kowalski"; // przypisanie wartości do pola nazwisko
    // ktos.wiek = 30;             // przypisanie wartości do pola wiek
    ktos.pobierz_dane(); // wywołanie metody pobierz_dane
    ktos.wizytowka(); // wywołanie metody wizytowka
    return 0;
}