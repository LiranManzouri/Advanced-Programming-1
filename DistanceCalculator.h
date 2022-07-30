#ifndef ADVANCED_PROGRAMMING_1_DISTANCECALCULATOR_H
#define ADVANCED_PROGRAMMING_1_DISTANCECALCULATOR_H

#include "Flower.h"
#include <cmath>


class DistanceCalculator {

public:
    static double euclidean(const Flower& f1, const Flower& f2);

    static double chebyshev(const Flower& f1, const Flower& f2);

    static double manhattan(const Flower& f1, const Flower& f2);

};


#endif //ADVANCED_PROGRAMMING_1_DISTANCECALCULATOR_H
