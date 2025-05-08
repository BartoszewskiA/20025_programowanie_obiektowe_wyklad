#include <iostream>

using namespace std;

class Test
{
    public:
        Test() { cout << "Konstruktor" << endl; }
        Test(const Test &t) { cout << "Konstruktor kopiujacy" << endl; }
        ~Test() { cout << "Destruktor" << endl; }
};

void funkcja(Test t)
{
    cout << "Funkcja" << endl;
}

int main()
{
    Test t1;
    funkcja(t1); // Przekazanie przez wartość
    return 0;
}