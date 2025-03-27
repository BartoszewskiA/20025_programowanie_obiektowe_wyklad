#include <iostream>

class Punkt
{
private:
    int x;
    int y;

public:
    int getX() { return x; }
    int getY() { return y; }
    void setX(int px) { x = px; }
    void setY(int py) { y = py; }
};

using namespace std;

int main()
{
    Punkt p;
    p.setX(10);
    p.setY(20);
    cout<<p.getX()<<endl;
    cout<<p.getY()<<endl;
    return 0;
}