//
// Created by eddi on 23. 12. 15.
//

#ifndef COMP12_RANDOMGENERATOR_H
#define COMP12_RANDOMGENERATOR_H

#define RANDOM_MIN 0
#define RANDOM_MAX 10

class RandomGenerator {
public:
    static double generate();
    static int generate(int min, int max);
};


#endif //COMP12_RANDOMGENERATOR_H
