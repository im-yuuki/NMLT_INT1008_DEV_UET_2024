// [Template Maximum]
template <class T>
T maximum(T a, T b, T c, T d) {
    T max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (max < d) max = d;
    return max;
}