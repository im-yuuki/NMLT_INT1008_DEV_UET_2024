// [ChangeValue]
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int** mat = new int*[m];
    for (int i = 0; i < m; i++) {
        mat[i] = new int[n];
        for (int j = 0; j < n; j++) cin >> mat[i][j];
    }
    int i, j, x;
    cin >> i >> j >> x;
    mat[--i][--j] = x;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << mat[i][j] << ' ';
        cout << endl;
    }
}


// [ChangePosition]
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int** mat = new int*[m];
    for (int i = 0; i < m; i++) {
        mat[i] = new int[n];
        for (int j = 0; j < n; j++) cin >> mat[i][j];
    }
    int i1, j1, i2, j2;
    cin >> i1 >> j1 >> i2 >> j2;
    int r = mat[--i1][--j1];
    mat[i1][j1] = mat[--i2][--j2];
    mat[i2][j2] = r;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << mat[i][j] << ' ';
        cout << endl;
    }
}


// [SortInColumn]
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int* mat = new int[m * n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> mat[i + m * j];
    int x;
    cin >> x;
    if (x < n) sort(mat + x * m, mat + x * m + m, greater<int>());
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << mat[i + m * j] << ' ';
        cout << endl;
    }
}


// [SortInRow]
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int* mat = new int[m * n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> mat[i * n + j];
    int x;
    cin >> x;
    if (x < n) sort(mat + x * n, mat + x * n + n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << mat[i * n + j] << ' ';
        cout << endl;
    }
}


// [AllPossibleWay]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool** mat = new bool*[n];
    for (int i = 0; i < n; i++) {
        mat[i] = new bool[n];
        for (int j = 0; j < n; j++) cin >> mat[i][j];
    }
    int x, from_x = 0, to_x = 0;
    cin >> x;
    x--;
    for (int i = 0; i < n; i++) {
        if (mat[i][x]) to_x++;
        if (mat[x][i]) from_x++;
    }
    cout << from_x << ' ' << to_x;
}


// [EmployeeInformation]
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        bool male, married;
        int age;
        cin >> male >> age >> married;
        if (!male && age >= 30 && married) count++; 
    }
    cout << count;
}