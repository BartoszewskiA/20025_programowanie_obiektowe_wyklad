#include <iostream>

using namespace std;

class Stale_matematyczne
{
private:
    static double PI;
    static double e;

public:
    static double getPI() { return PI; }
    static double getE() { return e; }
};

double Stale_matematyczne::PI = 3.14159265358979323846;
double Stale_matematyczne::e = 2.71828182845904523536;

int main()
{
    cout << "PI: " << Stale_matematyczne::getPI() << endl;
    cout << "e: " << Stale_matematyczne::getE() << endl;
    return 0;
}