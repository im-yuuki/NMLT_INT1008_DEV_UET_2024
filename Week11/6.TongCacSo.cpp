// [Get Sum Of An Array]
template <class T>
T getSum(T a[], int n) {
    T sum = (T)0;
    for (int i = 0; i < n; i ++) sum += a[i];
    return sum;
}