#ifndef ADVANCED_PROGRAMMING_1_KNN_H
#define ADVANCED_PROGRAMMING_1_KNN_H

#include <Flower.h>

class KNN {
    static int partition(std::pair<Flower *, double> *arr, int left, int right, int pivot);
public:
    static void QuickSelect(int k, std::pair<Flower *, double> *arr, int left, int right);
};


#endif //ADVANCED_PROGRAMMING_1_KNN_H
