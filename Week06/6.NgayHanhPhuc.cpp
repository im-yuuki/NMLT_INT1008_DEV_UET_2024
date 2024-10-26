// [HappyDays]
#include <iostream>
using namespace std;

int main() {
    int n, v;
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> v;
        if (v >= 0) cout << i << ' ';
    }
    cout << endl;
}