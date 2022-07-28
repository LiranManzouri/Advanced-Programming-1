//
// Created by liran on 19/07/2022.
//

#include <string>
#include <utility>
#include <iostream>

using namespace std;

class Flower {
    string m_flowerType;
    double m_calyxLeavesLength;
    double m_calyxLeavesWidth;
    double m_petalLength;
    double m_petalWidth;
public:

    Flower(string flowerType, double calyxLeavesLength, double calyxLeavesWidth, double petalLength,
           double petalWidth) : m_calyxLeavesLength(calyxLeavesLength), m_calyxLeavesWidth(calyxLeavesWidth),
                                m_petalLength(petalLength), m_petalWidth(petalWidth), m_flowerType(move(flowerType)) {}

    Flower() : m_calyxLeavesLength(0), m_calyxLeavesWidth(0),
               m_petalLength(0), m_petalWidth(0), m_flowerType("") {}

    Flower(const Flower &flower) : m_calyxLeavesLength(flower.m_calyxLeavesLength),
                                   m_calyxLeavesWidth(flower.m_calyxLeavesWidth),
                                   m_petalLength(flower.m_petalLength), m_petalWidth(flower.m_petalWidth),
                                   m_flowerType(flower.m_flowerType) {}

    const string getFlowerType() const;

    const double getCalyxLeavesLength() const;

    const double getCalyxLeavesWidth() const;

    const double getPetalLength() const;

    const double getPetalWidth() const;

    Flower &operator=(const Flower &flower) {
        if (this == &flower) {
            return *this;
        }
        m_flowerType = flower.m_flowerType;
        m_calyxLeavesLength = flower.m_calyxLeavesLength;
        m_calyxLeavesWidth = flower.m_calyxLeavesWidth;
        m_petalLength = flower.m_petalLength;
        m_petalWidth = flower.m_petalWidth;
        return *this;
    }
};

ostream &operator<<(ostream &os, const Flower &flower);

//ostream &operator<<(ostream &os, const Flower &flower) {
//    return os << flower.getFlowerType() << " " << flower.getCalyxLeavesLength() << " "
//              << flower.getCalyxLeavesWidth() << " " << flower.getPetalLength() << flower.getPetalWidth();
//}