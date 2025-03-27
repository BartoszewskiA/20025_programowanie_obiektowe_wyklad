#include <iostream>

using namespace std;

class Liczba
{
private:
    int wartosc;

public:
    Liczba() { wartosc = 101; }
    int getWartosc() { return wartosc; }
    void setWartosc(int w) { wartosc = w; }
};

int main()
{
    Liczba liczba_01;
    cout << liczba_01.getWartosc() << endl;
    return 0;
}