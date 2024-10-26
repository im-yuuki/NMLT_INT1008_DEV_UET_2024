// [MixedSort2]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> plus, minus;
    bool mapper[10000];
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        if (val >= 0) {
            plus.push_back(val);
            mapper[i] = true;
        }
        else {
            minus.push_back(val);
            mapper[i] = false;
        }
    }
    sort(minus.begin(), minus.end(), greater<int>());
    sort(plus.begin(), plus.end());
    vector<int>::iterator itp = plus.begin(), itm = minus.begin();
    for (int i = 0; i < n; i++) {
        if (mapper[i]) cout << *(itp++) << ' ';
        else cout << *(itm++) << ' ';
    }
    cout << endl;
}