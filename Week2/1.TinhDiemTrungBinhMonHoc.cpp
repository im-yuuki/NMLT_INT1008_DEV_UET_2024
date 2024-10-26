// [AverageOfSix]
#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, a3;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> a3;
    double TB = a1 + b1 + c1 + (a2 + b2) * 2 + a3 * 3;
    cout << TB / 10;
}
