//
// Created by liran on 19/07/2022.
//

#include <string>

class Flower {
    const std::string m_flowerType;
    const double m_calyxLeavesLength;
    const double m_calyxLeavesWidth;
    const double m_petalLength;
    const double m_petalWidth;
public:
    std::string getFlowerType();

    double getCalyxLeavesLength();

    double getCalyxLeavesWidth();

    double getPetalLength();

    double getPetalWidth();
};
