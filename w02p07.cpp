#include <iostream>
#include <ctime>

using namespace std;

class Punkt
{
public:
    int x;
    int y;
    Punkt(int max)
    {
        x = rand() % max;
        y = rand() % max;
    }
    ~Punkt() { cout << "Destruktor" << endl; }
};
int main()
{

    srand(time(NULL));
    Punkt *tab[10];
    for (int i = 0; i < 10; i++)
        tab[i] = new Punkt(100);
    for (int i = 0; i < 10; i++)
        cout << "Punkt " << i << ": (" << tab[i]->x << ", " << tab[i]->y << ")" << endl;
    for (int i = 0; i < 10; i++)
    {
        delete tab[i];
    }
    {
        /* code */
    }

    return 0;
}