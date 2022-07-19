//
// Created by liran on 19/07/2022.
//

#ifndef ADVANCED_PROGRAMMING_1_VERSICOLOR_H
#define ADVANCED_PROGRAMMING_1_VERSICOLOR_H


class Flower {
    const String m_flowerType;
    const double m_calyxLeavesLength;
    const double m_calyxLeavesWidth;
    const double m_petalLength;
    const double m_petalWidth;
public:
    String getFlowerType();

    double getCalyxLeavesLength();

    double getCalyxLeavesWidth();

    double getPetalLength();

    double getPetalWidth();
};


#endif //ADVANCED_PROGRAMMING_1_VERSICOLOR_H
