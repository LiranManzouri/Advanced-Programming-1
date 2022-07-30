//
// Created by liran on 28/07/2022.
//

#include "ReadFlowers.h"
#include "ClassifyFlower.h"
#include <iostream>
#include <fstream>

using namespace std;

void ReadFlowers::readAndSaveFlowers() {
    int numOfFlowers = getNumOfFlowers();
    flowers = new Flower[numOfFlowers];

    ifstream flowersInputFile;
    flowersInputFile.open(fileName);
    if (!flowersInputFile) {
        cout << "No such file!" << endl;
        return;
    }
    string line;
    const char delim = ',';
    int index = 0;
    while (!flowersInputFile.eof()) {
        getline(flowersInputFile, line);
        if (line.empty()) {
            continue;
        }
        string token1 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token2 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token3 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token4 = line.substr(0, line.find(delim));
        string flowerType;
        if (line.find(delim) != string::npos) {
            line.erase(0, line.find(delim) + 1);
            flowerType = line;
            line.erase();
        }
        double calyxLeavesLength = stod(token1);
        double calyxLeavesWidth = stod(token2);
        double petalLength = stod(token3);
        double petalWidth = stod(token4);
        Flower flower = Flower(flowerType, calyxLeavesLength, calyxLeavesWidth, petalLength, petalWidth);
        flowers[index] = flower;
        index++;
    }
}

int ReadFlowers::getNumOfFlowers() {
    int numOfFlowers = 0;
    ifstream classifiedFile;
    classifiedFile.open(fileName);
    string line;
    while (!classifiedFile.eof()) {
        getline(classifiedFile, line);
        if (line.empty()) {
            continue;
        }
        numOfFlowers++;
    }
    return numOfFlowers;
}


int main() {
    string classifiedFlowersFileName = "../classified.csv";
    string unclassifiedFlowersFileName = "../Unclassified.csv";

    ReadFlowers classifiedReader = ReadFlowers(classifiedFlowersFileName);
    ReadFlowers unclassifiedReader = ReadFlowers(unclassifiedFlowersFileName);

    classifiedReader.readAndSaveFlowers();
    unclassifiedReader.readAndSaveFlowers();

    int numOfClassifiedFlowers = classifiedReader.getNumOfFlowers();
    Flower *classifiedFlowers = classifiedReader.getFlowers();
    for (int i = 0; i < numOfClassifiedFlowers; i++) {
        cout << classifiedFlowers[i] << endl;
    }

    int numOfUnclassifiedFlowers = unclassifiedReader.getNumOfFlowers();
    Flower *unclassifiedFlowers = unclassifiedReader.getFlowers();
    for (int i = 0; i < numOfUnclassifiedFlowers; i++) {
        cout << unclassifiedFlowers[i] << endl;
    }

    ClassifyFlower clf = ClassifyFlower(unclassifiedFlowers[0], classifiedFlowers, numOfClassifiedFlowers, 5);

    clf.euclideanClassify();


    return 0;
}
