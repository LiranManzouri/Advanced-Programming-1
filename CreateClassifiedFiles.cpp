//
// Created by liran on 30/07/2022.
//

#include "CreateClassifiedFiles.h"
#include "ReadFlowers.h"
#include "ClassifyFlower.h"
#include <iostream>
#include <fstream>

void CreateClassifiedFiles::createClassified() const {

    ofstream classifyByEuclideanFile;
    classifyByEuclideanFile.open("../euclidean_output.csv");

    ofstream classifyByChebyshevFile;
    classifyByChebyshevFile.open("../chebyshev_output.csv");

    ofstream classifyByManhattanFile;
    classifyByManhattanFile.open("../manhattan_output.csv");

    ReadFlowers classifiedReader = ReadFlowers("../classified.csv");
    ReadFlowers unclassifiedReader = ReadFlowers("../unclassified.csv");

    classifiedReader.readAndSaveFlowers();
    unclassifiedReader.readAndSaveFlowers();

    Flower *classifiedFlowers = classifiedReader.getFlowers();
    int numOfClassifiedFlowers = classifiedReader.getNumOfFlowers();

    for (int i = 0; i < unclassifiedReader.getNumOfFlowers(); i++) {
        const Flower unclassifiedFlower = unclassifiedReader.getFlowers()[i];
        ClassifyFlower classifyFlower = ClassifyFlower(unclassifiedFlower, classifiedFlowers,
                                                       numOfClassifiedFlowers, k);
        string flowerTypeByEuclidean = classifyFlower.euclideanClassify();
        classifyByEuclideanFile << flowerTypeByEuclidean << endl;

        string flowerTypeByChebyshev = classifyFlower.chebyshevClassify();
        classifyByChebyshevFile << flowerTypeByChebyshev << endl;

        string flowerTypeByManhattan = classifyFlower.manhattanClassify();
        classifyByManhattanFile << flowerTypeByManhattan << endl;
    }

    classifyByEuclideanFile.close();
    classifyByChebyshevFile.close();
    classifyByManhattanFile.close();

}

int main() {

    CreateClassifiedFiles createClassifiedFiles = CreateClassifiedFiles(5);


    createClassifiedFiles.createClassified();

}
