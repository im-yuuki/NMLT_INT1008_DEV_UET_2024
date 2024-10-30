// [SumOddRecursive]
#include <iostream>
using namespace std;

int calc(int n, int sum) {
    if (n < 0) return sum;
    sum += n * 2 + 1;
    return calc(n - 1, sum);
}

int main() {
    int n;
    cin >> n;
    cout << calc(n, 0) << endl;
}


// [ProductOddRecusive]
#include <iostream>
using namespace std;

long long calc(int n, long long sum) {
    if (n < 0) return sum;
    sum *= n * 2 + 1;
    return calc(n - 1, sum);
}

int main() {
    int n;
    cin >> n;
    cout << calc(n, 1) << endl;
}


// [Intertwined Recursive]
#include <iostream>
using namespace std;

int calc(int n, int sum) {
    if (n < 0) return sum;
    if (n % 2) sum += n;
    else sum -= n;
    return calc(n - 1, sum);
}

int main() {
    int n;
    cin >> n;
    cout << calc(n, 0) << endl;
}


// [SumOfSquares]
#include <iostream>
using namespace std;

int calc(int n, int sum) {
    if (n < 0) return sum;
    sum += n * n;
    return calc(n - 1, sum);
}

int main() {
    int n;
    cin >> n;
    cout << calc(n, 0) << endl;
}


// [Exponential Expression]
#include <iostream>
#include <cmath>
using namespace std;

int calc(int n, int sum) {
    if (n < 1) return sum;
    sum += pow(n, n);
    return calc(n - 1, sum);
}

int main() {
    int n;
    cin >> n;
    cout << calc(n, 0) << endl;
}


// [GCDRecursive]
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}


// [FibonaciRecursive]
#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}


// [FibonaccciRecursive]
#include <iostream>
using namespace std;

int fib(int n) {
    if (n < 2) return 1;
    return 2 * fib(n - 1) + fib(n - 2) + 1;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}


// [SubtractionRecursive]
#include <iostream>
using namespace std;

int fib(int n) {
    if (n < 2) return 1;
    return 3 * fib(n - 1) - fib(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}


// [FactorialRecursive]
#include <iostream>
using namespace std;

long long factorial(int n, long long ans) {
    if (n < 2) return ans;
    ans *= n;
    return factorial(n - 1, ans);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n, 1) << endl;
}