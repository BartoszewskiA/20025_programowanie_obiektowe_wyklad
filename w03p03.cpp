#include <iostream>
using namespace std;

class Klasa
{
public:
    const int x;
    char c;
    string s;
    // Klasa(): x(10), c('x'), s("brak"){}
    // Klasa(int px, char pc, string ps) : x(px), c(pc), s(ps){}
    // Klasa(int x=0, char c='X', string s="tekst") : x(x), c(c), s(s) {}
    Klasa(int px = 0, char pc = 'X', string ps = "tekst") : x(px), c(pc), s(ps) {}
};

int main()
{
    Klasa klasa2;
    Klasa klasa(10, 'a', "test");
    cout << klasa.x << " " << klasa.c << " " << klasa.s << endl;
    return 0;
}