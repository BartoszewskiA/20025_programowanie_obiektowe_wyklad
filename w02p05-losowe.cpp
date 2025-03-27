#include <iostream>
#include <ctime>

using namespace std;

class Random
{
    public:
        Random()
        {
            srand(time(NULL));
        }
        int nextInt()
        {
            return rand();
        }
        int nextInt(int max)  // <0, max-1>
        {
            return rand() % max;
        }
        int nextInt(int min, int max)  // <min, max-1>
        {
            return rand() % (max - min) + min;
        }
        double nextDouble()  //0.0 - 0.(9)
        {
            return (double)rand() / RAND_MAX;
        }
        int nextKostka()  //1-6
        {
            return rand() % 6 + 1;
        }
        string nextMoneta()  //orzeł - reszka
        {
            return rand() % 2 == 0 ? "orzel" : "reszka";
        }
};

int main()
{
    Random random;
    cout << random.nextInt(1,7) << endl;
    return 0;
}