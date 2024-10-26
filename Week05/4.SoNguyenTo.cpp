// [Prime]
#include <iostream>
using namespace std;

bool prime(int num) {
    if (num < 2) return false;
    if (num < 4) return true;
    for (int i = 2; i * i <= num; i++) if (num % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << (prime(n) ? "Prime." : "Not a prime.") << endl;
}