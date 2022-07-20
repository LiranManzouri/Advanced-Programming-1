#include <KNN.hpp>

int KNN::partition(std::pair<double, int> *arr, int left, int right, int pivot){
    int x = arr[pivot].first;
    std::swap(arr[pivot], arr[right]);
    int i = left;
    for (int j = left; j < right; j++){
        if(arr[j].first <= x){
            std::swap(arr[j], arr[i]);
            i++;
        }
    }
    std::swap(arr[right], arr[i]);
    return i;
}

void KNN::QuickSelect(int k, std::pair<double, int> *arr, int left, int right){
    if (left == right){
        return;
    }

    int pivotindex = partition(arr, left, right, (right - left) / 2);

    if (pivotindex == k){
        return;
    }
    if (pivotindex < k){
        QuickSelect(k, arr, left, pivotindex - 1);
        return;
    }
    if (pivotindex > k){
        QuickSelect(k, arr, pivotindex + 1, right);
        return;
    }
}