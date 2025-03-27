#include <iostream>

using namespace std;

class Liczba
{
private:
    int wartosc;

public:
    Liczba() { 
        wartosc = 101;
        cout << "Konstruktor" << endl; 
    }
    ~Liczba() { cout << "Destruktor" << endl; }
    int getWartosc() { return wartosc; }
    void setWartosc(int w) { wartosc = w; }
};

int main()
{

    Liczba *liczba_01 = new Liczba();
    cout << liczba_01->getWartosc() << endl;
    delete liczba_01;
    return 0;
}