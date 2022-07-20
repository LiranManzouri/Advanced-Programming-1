#include <Flower.hpp>

class KNN {

private:
    int partition(std::pair<double, int> *arr, int left, int right, int pivot);

public:
    void QuickSelect(int k, std::pair<double, int> *arr, int left, int right);
};