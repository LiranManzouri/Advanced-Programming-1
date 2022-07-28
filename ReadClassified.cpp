//
// Created by liran on 28/07/2022.
//

#include "ReadClassified.hpp"
#include <iostream>
#include <fstream>

using namespace std;

Flower *ReadClassified::readAndSaveClassified() {
    string fileName = "../classified.csv";
    ifstream classifiedFile;
    int numOfFlowers = getNumOfFlowers(fileName);
    Flower *classifiedFlowers = new Flower[numOfFlowers] /*= new Flower[numOfFlowers]*/;
    classifiedFile.open(fileName);
    if (!classifiedFile) {
        cout << "No such file!" << endl;
        return nullptr;
    }
    string line;
    const char delim = ',';
    int index = 0;
    while (!classifiedFile.eof()) {
        getline(classifiedFile, line);
        cout << line << endl;

        string token1 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token2 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token3 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token4 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string flowerType = line/*.substr(0, line.find(delim))*/;
        line.erase();

        double calyxLeavesLength = stod(token1);
        double calyxLeavesWidth = stod(token2);
        double petalLength = stod(token3);
        double petalWidth = stod(token4);

        Flower flower = Flower(flowerType, calyxLeavesLength, calyxLeavesWidth, petalLength, petalWidth);

        cout << flower << endl;

        classifiedFlowers[index] = flower;
        index++;
        /* cout << calyxLeavesLength << "   :   " << calyxLeavesWidth << "   :   " << petalLength << "   :   "
              << petalWidth << "   :   " << flowerType; */
    }

    cout << "\n\n\n\n\n" << endl;
    for (int i = 0; i < numOfFlowers; i++) {
        cout << classifiedFlowers[i] << endl;
    }
    cout << "hello" << endl;
    return nullptr;
}

int ReadClassified::getNumOfFlowers(string fileName) {
    int numOfFlowers = 0;
    ifstream classifiedFile;
    classifiedFile.open(fileName);
    string line;
    while (!classifiedFile.eof()) {
        getline(classifiedFile, line);
        numOfFlowers++;
    }
    return numOfFlowers;
}


int main() {
    ReadClassified reader = ReadClassified();
    cout << "yes" << endl;
    reader.readAndSaveClassified();
    return 0;
}
