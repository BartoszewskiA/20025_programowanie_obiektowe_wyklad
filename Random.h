#ifndef RANDOM_H
#define RANDOM_H
#include<string>
#include<ctime>
class Random
{
    public:
        Random();
        int nextInt();
        int nextInt(int max);  // <0, max-1>
        int nextInt(int min, int max);  // <min, max-1>
        double nextDouble();  //0.0 - 0.(9)
        int nextKostka();  //1-6
        std::string nextMoneta();  //orzeł - reszka
};
#endif // RANDOM_H