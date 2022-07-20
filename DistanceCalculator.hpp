#include <Flower.hpp>
#include <cmath>


class DistanceCalculator{

public:
    const double euclidean(const Flower f1, const Flower f2) const;
    const double chebyshev(const Flower f1, const Flower f2) const;
    const double manhattan(const Flower f1, const Flower f2) const;
    
};