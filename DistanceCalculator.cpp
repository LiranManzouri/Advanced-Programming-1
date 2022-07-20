#include <DistanceCalculator.hpp>

const double DistanceCalculator::euclidean(Flower f1, Flower f2) const {
    double sum = 0;
    sum += pow(f1.getCalyxLeavesLength() - f2.getCalyxLeavesLength(),2);
    sum += pow(f1.getCalyxLeavesWidth() - f2.getCalyxLeavesWidth(), 2);
    sum += pow(f1.getPetalLength() - f2.getPetalLength(), 2);
    sum += pow(f1.getPetalWidth() - f2.getPetalWidth(), 2);
    return sqrt(sum);
}

const double DistanceCalculator::chebyshev(const Flower f1, const Flower f2) const {
    //the distance is the max of the simple distances
    double max = 0;
    max = std::max(std::abs(f1.getCalyxLeavesLength() - f2.getCalyxLeavesLength()), max);
    max = std::max(std::abs(f1.getCalyxLeavesWidth() - f2.getCalyxLeavesWidth()), max);
    max = std::max(std::abs(f1.getPetalLength() - f2.getPetalLength()), max);
    max = std::max(std::abs(f1.getPetalWidth() - f2.getPetalWidth()), max);
    return max;
}

const double DistanceCalculator::manhattan(const Flower f1, const Flower f2) const {
    //https://iq.opengenus.org/manhattan-distance/#:~:text=Manhattan%20distance%20is%20a%20distance,all%20dimensions%20of%20two%20points.
    double distance = 0;
    distance += std::abs(f1.getCalyxLeavesLength() - f2.getCalyxLeavesLength());
    distance += std::abs(f1.getCalyxLeavesWidth() - f2.getCalyxLeavesWidth());
    distance += std::abs(f1.getPetalLength() - f2.getPetalLength());
    distance += std::abs(f1.getPetalWidth() - f2.getPetalWidth());
    return distance;
}
