// [Frequency]
#include <iostream>
#include <vector>

struct Item {
    int v;
    int cnt = 1;
};
using namespace std;

vector<Item> vt;

void add(int v) {
    for (int i = 0; i < (int)vt.size(); i++) if (vt[i].v == v) {
        vt[i].cnt++;
        return;
    }
    Item newItem;
    newItem.v = v;
    vt.push_back(newItem);
}

int main () {
    int n, v;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> v;
        add(v);
    }
    for (int i = 0; i < (int)vt.size(); i++) cout << vt[i].v << ' ' << vt[i].cnt << endl;
}