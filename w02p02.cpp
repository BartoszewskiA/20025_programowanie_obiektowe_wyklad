#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int wartosc;

public:
    Liczba() { wartosc = rand() % 100; }
    int getWartosc() { return wartosc; }
    void setWartosc(int w) { wartosc = w; }
};

int main()
{

    srand(time(NULL));
    Liczba liczba_01;
    cout << liczba_01.getWartosc() << endl;
    return 0;
}