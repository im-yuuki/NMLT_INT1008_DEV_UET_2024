// [OneDimensionArray]
#include <iostream>
using namespace std;

int main() {
    int a[31];
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    float avg = (float)sum / n;
    for (int i = 0; i < n; i++) if (avg <= a[i]) cout << a[i] << ' ';
    cout << endl;
}