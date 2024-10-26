// [ProductOfOddNumbers]
#include <iostream>
using namespace std;

int main() {
    int n; 
    long long ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ans *= i * 2 + 1;
    }
    cout << ans << endl;
}


// [SumofOddNumbers]
#include <iostream>
using namespace std;

int main() {
    int n, ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ans += i * 2 + 1;
    }
    cout << ans << endl;
}


// [Expression 11]
#include <cstdio>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++) sum += 1.0 / factorial(i);
    printf("%.5lf\n", sum);
    return 0;
}


// [SumOfFractions]
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (double i = 1; i <= n; i += 1) sum += i / (i + 1);
    printf("%.5lf\n", sum);
    return 0;
}


// [SumOfFactorials]
#include <cstdio>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 1; i <= n; i++) sum += factorial(i);
    printf("%lld\n", sum);
    return 0;
}


// [AddExpression]
#include <cstdio>

int main() {
    int n, prev = 0;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        prev += i;
        sum += prev;
    }
    printf("%d\n", sum);
    return 0;
}


// [SumOfPowers]
#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 1; i <= n; i++) sum += pow(i, i);
    printf("%lld\n", sum);
    return 0;
}


// [LargestDigit]
#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	char largest = s[0];
	for (int i = 1; i < (int)s.size(); i++) {
		if (s[i] > largest) largest = s[i];
	}
	cout << largest - '0' << endl;
}


// [Fibonaci7]
#include <iostream>
using namespace std;

int fib7(int x) {
	if (x == 0 || x == 1) return 1;
	return fib7(x - 1) * 2 + fib7(x - 2) + 1;
}

int main() {
	int x;
	cin >> x;
	cout << fib7(x);
}


// [AverageScore]
#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	double* score = new double[n];
	for (int i = 0; i < n; i++) scanf("%lf", &score[i]);
	double average = 0;
	for (int i = 0; i < n; i++) average += score[i];
	average /= n;
	printf("%.2lf\n", average);
	delete score;
}