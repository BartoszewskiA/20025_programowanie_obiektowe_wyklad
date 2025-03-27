#include <iostream>
#include <ctime>

using namespace std;

double procentGauss(int skupienie) // <0,1)
{
    double wynik = 0.0;
    for (int i = 0; i < skupienie; i++)
        wynik += rand() % 100;
    wynik /= skupienie;
    return wynik / 100.0;
}
double procentGauss(int minimum, int skupienie) // <minimum/100 , 1)
{
    double wynik = 0.0;
    for (int i = 0; i < skupienie; i++)
        wynik += rand() % (100 - minimum);
    wynik = wynik / skupienie + minimum;
    return wynik / 100.0;
}

int main()
{
    srand(time(NULL));
    for(int i=0; i<20; i++)
    {
        cout << procentGauss(100) << endl;
    }
    return 0;
}