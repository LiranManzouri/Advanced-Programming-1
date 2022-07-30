#ifndef ADVANCED_PROGRAMMING_1_READFLOWERS_H
#define ADVANCED_PROGRAMMING_1_READFLOWERS_H

#include "Flower.h"
#include <iostream>
#include <utility>

using namespace std;

class ReadFlowers {

    const string fileName;
    Flower *flowers;

public:

    explicit ReadFlowers(string fileName) : fileName(move(fileName)) {
        flowers = nullptr;
    }

    ~ReadFlowers() {
        delete[] flowers;
    }


    Flower *getFlowers() {
        return flowers;
    }

    int getNumOfFlowers();

    void readAndSaveFlowers();
};


#endif //ADVANCED_PROGRAMMING_1_READFLOWERS_H
