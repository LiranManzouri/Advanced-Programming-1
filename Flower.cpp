//
// Created by liran on 19/07/2022.
//

#include "Flower.hpp"

const string Flower::getFlowerType() const{
    return m_flowerType;
}

const double Flower::getPetalLength() const {
    return m_petalLength;
}

const double Flower::getPetalWidth() const {
    return m_petalWidth;
}

const double Flower::getCalyxLeavesLength() const {
    return m_calyxLeavesLength;
}

const double Flower::getCalyxLeavesWidth() const {
    return m_calyxLeavesWidth;
}

ostream &operator<<(ostream &os, const Flower &flower) {
    return os << flower.getFlowerType() << " " << flower.getCalyxLeavesLength() << " "
              << flower.getCalyxLeavesWidth() << " " << flower.getPetalLength() << " " << flower.getPetalWidth();
}