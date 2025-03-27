#include <iostream>

using namespace std;

class Test
{
public:
    Test() { cout << "Zadzialal Konstruktor" << endl; }
    ~Test() { cout << "Zadzialal Destruktor" << endl; }
};

void funkcjaTestowa(Test &t);

int main()
{
    Test t01;
    funkcjaTestowa(t01);
    return 0;
}

void funkcjaTestowa(Test &t)
{
    cout << "Funkcja testowa" << endl;
}