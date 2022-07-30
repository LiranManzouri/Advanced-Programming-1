#include <KNN.h>

using namespace std;

int KNN::partition(pair<Flower *, double> *arr, int left, int right, int pivot) {
    double x = arr[pivot].second;
    swap(arr[pivot], arr[right]);
    int i = left;
    for (int j = left; j < right; j++) {
        if (arr[j].second <= x) {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    swap(arr[right], arr[i]);
    return i;
}

void KNN::QuickSelect(int k, pair<Flower *, double> *arr, int left, int right) {
    cout << "here4" << endl;

    if (left == right) {
        return;
    }
    int pivotIndex = left + (right - left) / 2;
    pivotIndex = partition(arr, left, right, pivotIndex);
    if (pivotIndex == k) {
        return;
    }
    if (k < pivotIndex) {
        return QuickSelect(k, arr, left, pivotIndex - 1);
    }
    return QuickSelect(k, arr, pivotIndex + 1, right);
}
