#include <iostream>

using namespace std;

class Test
{
public:
    Test() { cout << "Zadzialal Konstruktor" << endl; }
    ~Test() { cout << "Zadzialal Destruktor" << endl; }
};

void funkcjaTestowa(Test *p);

int main()
{
    Test *t01 = new Test;
    funkcjaTestowa(t01);
    delete t01;
    return 0;
}

void funkcjaTestowa(Test *p)
{
    cout << "Funkcja testowa" << endl;
}