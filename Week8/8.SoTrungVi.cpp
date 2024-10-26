// [Median]
#include <cstdio>
#include <algorithm>

int main() {
    int a[10000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    std::sort(a, a + n);
    if (n % 2 == 0) printf("%.1f", (float)(a[n / 2] + a[n / 2 - 1]) / 2);
    else printf("%d", a[n / 2]);
}