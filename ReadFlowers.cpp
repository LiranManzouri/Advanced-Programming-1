//
// Created by liran on 28/07/2022.
//

#include "ReadFlowers.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void ReadFlowers::readAndSaveFlowers() {
    ifstream classifiedFile;
    int numOfFlowers = getNumOfFlowers();
    flowers = new Flower[numOfFlowers] /*= new Flower[numOfFlowers]*/;
    classifiedFile.open(fileName);
    if (!classifiedFile) {
        cout << "No such file!" << endl;
        return;
    }
    string line;
    const char delim = ',';
    int index = 0;
    while (!classifiedFile.eof()) {
        getline(classifiedFile, line);
        if (line.empty()) {
            continue;
        }
        cout << line << endl;
        string token1 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token2 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token3 = line.substr(0, line.find(delim));
        line.erase(0, line.find(delim) + 1);
        string token4 = line.substr(0, line.find(delim));
        string flowerType;
        if (line.find(delim) == string::npos) {
//            flowerType = nullptr;
        } else {
            line.erase(0, line.find(delim) + 1);
            flowerType = line/*.substr(0, line.find(delim))*/;
            line.erase();
        }
        cout << "hola" << endl;
        double calyxLeavesLength = stod(token1);
        double calyxLeavesWidth = stod(token2);
        double petalLength = stod(token3);
        double petalWidth = stod(token4);
        Flower flower = Flower(flowerType, calyxLeavesLength, calyxLeavesWidth, petalLength, petalWidth);
        flowers[index] = flower;
        index++;
    }


    for (int i = 0; i < numOfFlowers; i++) {
        cout << flowers[i] << endl;
    }
    cout << "hello" << endl;
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
    string fileName = "../classified.csv";
    string fileName2 = "../Unclassified.csv";
    ReadFlowers reader = ReadFlowers(fileName);
    ReadFlowers reader2 = ReadFlowers(fileName2);
    reader.readAndSaveFlowers();
    reader2.readAndSaveFlowers();
    return 0;
}
