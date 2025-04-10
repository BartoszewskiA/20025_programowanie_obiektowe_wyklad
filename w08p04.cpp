#include <iostream>

using namespace std;

class RGB
{
private:
    int r, g, b;

public:
    RGB(int r, int g, int b) : r(r), g(g), b(b) {}
    void print()
    {
        cout << "RGB(" << r << ", " << g << ", " << b << ")" << endl;
    }
    friend void wypisz_jasnosc(RGB obiekt); //tylko odczyt
    friend void zamien_na_szare(RGB &obiekt); //mozliwosc modyfikacji
};

void wypisz_jasnosc(RGB obiekt)
{
    int jasnosc = (obiekt.r + obiekt.g + obiekt.b) / 3;
    cout << "Jasnosc: " << jasnosc << endl;
}

void zamien_na_szare(RGB &obiekt)
{
    int szary = (obiekt.r + obiekt.g + obiekt.b) / 3;
    obiekt.r = szary;
    obiekt.g = szary;
    obiekt.b = szary;
}

int main()
{
    RGB kolor(100, 150, 200);
    kolor.print(); //metoda klasy
    wypisz_jasnosc(kolor); //funkcja zaprzyjazniona
    zamien_na_szare(kolor); //funkcja zaprzyjazniona
    kolor.print(); //metoda klasy
    return 0;
}