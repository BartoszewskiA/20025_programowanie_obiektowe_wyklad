#include <iostream>

using namespace std;

class Bazowa {
    public:
    Bazowa() {
        cout << "Konstruktor Bazowa" << endl;
    }
    ~Bazowa() {
        cout << "Destruktor Bazowa" << endl;
    }	
};

class Pochodna : public Bazowa {
public:
    Pochodna() {
        cout << "Konstruktor Pochodna" << endl;
    }
    ~Pochodna() {
        cout << "Destruktor Pochodna" << endl;
    }	
};


int main()
{
    Pochodna *n = new Pochodna();
    delete n;
    return 0;
}