//
// Created by liran on 19/07/2022.
//

#include <string>

class Flower {
    const int m_flowerType;
    const double m_calyxLeavesLength;
    const double m_calyxLeavesWidth;
    const double m_petalLength;
    const double m_petalWidth;
public:
    const int getFlowerType() const;

    const double getCalyxLeavesLength() const;

    const double getCalyxLeavesWidth() const;

    const double getPetalLength() const;

    const double getPetalWidth() const;
};
