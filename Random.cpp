#include <string>
#include <ctime>
#include "Random.h"
Random::Random()
{
    srand(time(NULL));
}
int Random::nextInt()
{
    return rand();
}
int Random::nextInt(int max) // <0, max-1>
{
    return rand() % max;
}
int Random::nextInt(int min, int max) // <min, max-1>
{
    return rand() % (max - min) + min;
}
double Random::nextDouble() // 0.0 - 0.(9)
{
    return (double)rand() / RAND_MAX;
}
int Random::nextKostka() // 1-6
{
    return rand() % 6 + 1;
}
std::string Random::nextMoneta() // orzeł - reszka
{
    return rand() % 2 == 0 ? "orzel" : "reszka";
}