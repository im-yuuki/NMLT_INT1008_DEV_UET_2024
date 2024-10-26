// [TwoDimensionArray]
#include <iostream>
using namespace std;

int mat[600][600];

int main() {
    int m, n, q;
    cin >> m >> n >> q;
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> mat[i][j];
    for (int i = 0; i < q; i++) {
        cin >> m >> n;
        cout << mat[m - 1][n - 1] << endl;
    }
}