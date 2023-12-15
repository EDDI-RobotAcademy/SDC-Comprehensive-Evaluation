#include <iostream>
#include "utility/random/RandomGenerator.h"
#include "utility/sleep/Sleeper.h"


int main()
{
    int randomNumber = RandomGenerator::generate(300,1000);
    Sleeper::sleep(randomNumber);
    return 0;
}
