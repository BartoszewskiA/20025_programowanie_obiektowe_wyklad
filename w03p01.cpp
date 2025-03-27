#include <iostream>
#include "Random.h"
using namespace std;

int main()
{
    Random random;
    for(int i=0; i<7; i++)
    {
        cout << random.nextInt(1,50) << "   ";
    }
    return 0;
}