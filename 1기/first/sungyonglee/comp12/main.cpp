#include <iostream>
#include "randomVelocity/randomVelocity.h"
#include "velocity/Velocity.h"

void velocity_example( )
{
    Velocity _velocity[10];
    int count = 0;
    int i;
    for (int i = 0 ; i < count ; i++) {
    _velocity[1].x = 1;
    std::cout << _velocity[i].x << std::endl;
    }

    RandomVelocity::RandomSecond(3,10);
    RandomVelocity::_RandomVelocity(30, 60);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    velocity_example( );
    return 0;
}
