#include <iostream>
using namespace std;

class Klasa
{
public:
    int x;
    char c;
    string s;
    Klasa(int x=0, char c='x', string s="brak")
    {
        this->x = x;
        this->c = c;
        this->s = s;
    }
};

int main()
{
    Klasa klasa(10, 'a');
    cout << klasa.x << " " << klasa.c << " " << klasa.s << endl;
    return 0;
}