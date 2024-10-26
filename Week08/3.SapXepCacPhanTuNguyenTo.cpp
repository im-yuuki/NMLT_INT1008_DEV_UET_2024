// [PrimeNumbersSort]
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    if (num < 4) return true;
    for (int i = 2; i * i <= num; i++) if (num % i == 0) return false;
    return true;
}

int main() {
    int n, a[500];
    vector<int> primes;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
        if (isPrime(a[i])) {
            primes.push_back(a[i]);
            a[i] = INT_MAX;
        }
    }
    sort(primes.begin(), primes.end());
    vector<int>::iterator it = primes.begin();
    for (int i = 0; i < n; i ++) {
        if (a[i] == INT_MAX) a[i] = *(it++);
        cout << a[i] << ' ';
    }
    cout << endl;
}