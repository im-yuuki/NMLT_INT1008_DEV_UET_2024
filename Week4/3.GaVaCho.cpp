// [ChickenAndDog]
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if ((b - 2 * a) % 2 == 1) {
        cout << "invalid\n";
        return 0;
    }
    int n = (b - 2 * a) / 2;
    int m = a - n;
    cout << "chicken = " << m << ", dog = " << n << endl;
}
