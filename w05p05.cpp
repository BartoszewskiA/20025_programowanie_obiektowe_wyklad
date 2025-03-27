#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class RownanieKwadratowe
{
private:
    double a;
    double b;
    double c;
    double delta;
    double x1;
    double x2;

    void liczDelte()
    {
        delta = b * b - 4 * a * c;
    }

    void liczPierwiastki()
    {
        if (a == 0)
        {
            delta = 0;
            x1 = x1 = NAN;
        }
        else
        {
            liczDelte();
            if (delta > 0)
            {
                x1 = (-b - sqrt(delta)) / (2 * a);
                x2 = (-b + sqrt(delta)) / (2 * a);
            }
            else if (delta == 0)
            {
                x1 = -b / (2 * a);
                x2 = x1;
            }
            else
            {
                x1 = x2 = NAN; // Brak rozwiązań rzeczywistych
            }
        }
    }

public:
    RownanieKwadratowe(double A, double B, double C) : a(A), b(B), c(C), delta(0), x1(0), x2(0)
    {
        liczPierwiastki();
    }
    double getDelta() { return delta; }
    double getX1() { return x1; }
    double getX2() { return x2; }
    bool rozwiazania() { return delta >= 0; }
    void setA(double a)
    {
        this->a = a;
        liczPierwiastki();
    }
    void setB(double b)
    {
        this->b = b;
        liczPierwiastki();
    }
    void setC(double c)
    {
        this->c = c;
        liczPierwiastki();
    }

    string toString()
    {
        stringstream odp;
        if (a == 0)
        {
            odp << "To nie jest równanie kwadratowe.\n";
        }
        else if (delta > 0)
        {
            odp << "x1 = " << x1 << endl
                << "x2 = " << x2 << endl;
        }
        else if (delta == 0)
        {
            odp << "x0 = " << x1 << endl;
        }
        else
        {
            odp << "Brak rozwiazan w zbiorze liczb rzeczywistych.\n";
        }
        return odp.str();
    }
};

int main()
{
    RownanieKwadratowe r1(1, 2, 20);
    cout << r1.toString() << endl;
    return 0;
}