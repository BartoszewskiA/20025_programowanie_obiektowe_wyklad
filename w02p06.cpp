#include <iostream>

using namespace std;

class Liczba
{
private:
    int wartosc;

public:
    Liczba(int wartosc) { this->wartosc = wartosc; }
    int getWartosc() { return wartosc; }
    void setWartosc(int wartosc) { this->wartosc = wartosc; }
};

int main()
{

    Liczba liczba_01(202);
    cout << liczba_01.getWartosc() << endl;
    return 0;
}