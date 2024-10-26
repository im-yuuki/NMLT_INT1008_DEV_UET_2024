// [MixedSort1]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    vector<int> odd, even;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> val;
        if (val % 2 == 0) even.push_back(val);
        else odd.push_back(val);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    for (int i = 0; i < (int)even.size(); i++) cout << even[i] << ' ';
    for (int i = 0; i < (int)odd.size(); i++) cout << odd[i] << ' ';
    cout << endl;
}