#include <iostream>
using namespace std;

class Klasa
{
public:
    int x;
    char c;
    string s;
    Klasa()
    {
        x = 10;
        c = 'x';
        s = "brak";
    }
    Klasa(int x, char c, string s)
    {
        this->x = x;
        this->c = c;
        this->s = s;
    }
};

int main()
{
    Klasa klasa;
    Klasa klasa2(10, 'a', "test");
    cout << klasa2.x << " " << klasa2.c << " " << klasa2.s << endl;
    cout << klasa.x << " " << klasa.c << " " << klasa.s << endl;
    return 0;
}