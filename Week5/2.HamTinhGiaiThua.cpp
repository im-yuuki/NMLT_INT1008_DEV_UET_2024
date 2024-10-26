// [FactorialFunction]
long long factorial (long long n) {
    long long gt = 1;
    for (int i = 1; i <= n;++i) gt *= i;
    return gt;
}