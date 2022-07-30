//
// Created by liran on 29/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_CLASSIFYFLOWER_H
#define ADVANCED_PROGRAMMING_1_CLASSIFYFLOWER_H

#include "Flower.h"
#include "map"
#include "KNN.h"

class ClassifyFlower {

    const Flower unclassifiedFlower;
    const int numOfFlowers;
    const int k;
    Flower *flowers;

    pair<Flower *, double> *getEuclideanDistances() const;

    pair<Flower *, double> *getChebyshevDistances() const;

    pair<Flower *, double> *getManhattanDistances() const;

    string classifyByKNN(pair<Flower*, double> *distances) const;

public:

    ClassifyFlower(const Flower &unclassifiedFlower, Flower *flowers, int numOfFlowers, int k) :
            unclassifiedFlower(unclassifiedFlower), flowers(flowers), numOfFlowers(numOfFlowers), k(k) {}

    string euclideanClassify();

    string chebyshevClassify();

    string manhattanClassify();
};


#endif //ADVANCED_PROGRAMMING_1_CLASSIFYFLOWER_H
