#include <KNN.hpp>

using namespace std;

int KNN::partition(pair<double, int> *arr, int left, int right, int pivot) {
    int x = arr[pivot].first;
    swap(arr[pivot], arr[right]);
    int i = left;
    for (int j = left; j < right; j++) {
        if (arr[j].first <= x) {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    swap(arr[right], arr[i]);
    return i;
}

void KNN::QuickSelect(int k, pair<double, int> *arr, int left, int right) {
    if (left == right) {
        return;
    }

    int pivotindex = partition(arr, left, right, (right - left) / 2);

    if (pivotindex == k) {
        return;
    }
    if (pivotindex < k) {
        QuickSelect(k, arr, left, pivotindex - 1);
        return;
    }
    if (pivotindex > k) {
        QuickSelect(k, arr, pivotindex + 1, right);
        return;
    }
}

/*
int main() {
    int arr[] = {1, 2, 4, 6, -3, -6, 56, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
}*/
