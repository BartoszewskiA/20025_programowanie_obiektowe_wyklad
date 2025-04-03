#include <iostream>
#include <sstream>

using namespace std;
// klasa bazowa ----------------------
class Punkt
{
private:
    int x, y;

public:
    // Punkt(int x, int y) : x(x), y(y) {}
    string wypisz()
    {
        stringstream ss;
        ss << "Punkt: (" << x << ", " << y << ")" << endl;
        return ss.str();
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
};
// klasa potomna ----------------------
class Punkt3D : public Punkt
{
private:
    int z;

public:
    string wypisz()
    {
        stringstream ss;
        ss << "Punkt3D: (" << getX() << ", " << getY() << ", " << z << ")" << endl;
        return ss.str();
    }
    int getZ()
    {
        return z;
    }
    void setZ(int z)
    {
        this->z = z;
    }
};
// -------------------------------------
int main()
{
    // Punkt p1;
    // p1.setX(5);
    // p1.setY(10);
    // cout << p1.wypisz();
    Punkt3D p2;
    p2.setX(5);
    p2.setY(10);
    p2.setZ(15);
    cout << p2.wypisz();
    return 0;
}