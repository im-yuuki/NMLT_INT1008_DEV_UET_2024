// [BasicLoop-SmallerThanN]
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) printf("%d ", i);
    printf("\n");
    return 0;
}


// [NthFibonacciNumber]
#include <cstdio>

int main() {
    int current = 1, previous = 1, n;
    scanf("%d", &n);
    if (n <= 2) {
        printf("1\n");
        return 0;
    }
    for (int i = 2; i < n; i++) {
        int temp = current;
        current += previous;
        previous = temp;
    }
    printf("%d\n", current);
}


// [ChickenAndDog]
#include <cstdio>

int main() {
    int animals, legs;
    scanf("%d %d", &animals, &legs);
    if ((4 * animals - legs) % 2 == 1) {
        printf("invalid\n");
        return 0;
    }
    int chickens = (4 * animals - legs) / 2;
    int dogs = animals - chickens;
    if (chickens < 0 || dogs < 0) {
        printf("invalid\n");
        return 0;
    }
    printf("chicken = %d, dog = %d\n", chickens, dogs);
}


// [CountingDigits]
#include <cstdio>

int countDigits(int n) {
    int cnt = 0;
    if (n < 0) n = -n;
    do {
        n /= 10;
        cnt++;
    } while (n != 0);
    return cnt;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countDigits(n));
    return 0;
}


// [DivideBySeven]
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 7; i <= n; i += 7) printf("%d ", i);
    printf("\n");
    return 0;
}


// [FivePerLine]
#include <cstdio>

int main() {
    for (int i = 1000; i < 2001; i++) printf("%d%s", i, (i % 5 == 4) ? "\n" : " ");
}


// [GCD]
#include <cstdio>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    if (m < 0) m = -m;
    if (n < 0) n = -n;
    printf("%d\n", gcd(m, n));
}


// [OddNumbers]
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) printf("%d ", i * 2 + 1);
    printf("\n");
}


// [FirstNFiboNumbers]
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }
    printf("\n");
}


// [Factorial]
#include <cstdio>

int main() {
    int n;
    long long factorial = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) factorial *= i;
    printf("%lld\n", factorial);
    return 0;
}


// [Perfect Number]
#include <cstdio>

int main() {
    int n, _n = 1;
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;
        _n += i;
        if (i != n / i) _n += n / i;
        if (_n > n) break;
    }
    printf("%s", (_n == n) ? "yes" : "no"); 
}
