// [Template Statistics]
#include <iostream>

template <class T>
void printStatistics(T a[], int n) {
    T _max = a[0];
    T _min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > _max) _max = a[i];
        if (a[i] < _min) _min = a[i];
    }
    std::cout << _max << ' ' << _min << std::endl;
}