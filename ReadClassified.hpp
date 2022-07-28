#include "Flower.hpp"
#include <iostream>

class ReadClassified {

public:
    /*ReadClassified() {
        flowers = nullptr;
    }*/

    Flower *readAndSaveClassified();

    int getNumOfFlowers(string fileName);
};
