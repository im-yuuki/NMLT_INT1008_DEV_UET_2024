// [EvenPositionSort]
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, a[500];
    vector<int> vt;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
        if (i % 2 == 0) {
            vt.push_back(a[i]);
            a[i] = INT_MAX;
        }
    }
    sort(vt.begin(), vt.end(), greater<int>());
    vector<int>::iterator it = vt.begin();
    for (int i = 0; i < n; i ++) {
        if (a[i] == INT_MAX) a[i] = *(it++);
        cout << a[i] << ' ';
    }
    cout << endl;
}