#include <iostream>

using namespace std;

class Liczba
{
private:
    int wartosc;

public:
    Liczba(int x) { wartosc = x; }
    ~Liczba() { cout << "Destruktor" << endl; }
    int getWartosc() { return wartosc; }
    void setWartosc(int w) { wartosc = w; }
};

int main()
{

    Liczba liczba_01(202);
    cout << liczba_01.getWartosc() << endl;
    return 0;
}