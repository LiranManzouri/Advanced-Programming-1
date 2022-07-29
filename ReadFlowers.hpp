#include "Flower.hpp"
#include <iostream>
#include <utility>

using namespace std;

class ReadFlowers {

    const string fileName;
    Flower *flowers;

public:
    ReadFlowers(string fileName) : fileName(move(fileName)) {
        flowers = nullptr;
    }

    ~ReadFlowers() {
        delete[] flowers;
    }

    int getNumOfFlowers();

    void readAndSaveFlowers();
};
