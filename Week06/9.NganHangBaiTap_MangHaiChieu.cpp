// [TwoDimensionArrayQueries]
#include <iostream>
using namespace std;

int main() {
    int m, n, q, a, b;
    cin >> m >> n >> q;
    int** t = new int*[m];
    for (int i = 0; i < n; i++) t[i] = new int[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << t[a - 1][b - 1] << endl;
    }
}


// [InsertColumn]
#include <iostream>
using namespace std;

int main() {
    int m, n, a, b;
    cin >> m >> n;
    int** t = new int*[m];
    for (int i = 0; i < n; i++) t[i] = new int[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    cin >> a >> b;
    a--;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= n; j++) {
            if (j < a) cout << t[i][j] << ' ';
            else if (j == a) cout << b << ' ';
            else cout << t[i][j - 1] << ' ';
        }
        cout << endl;
    }
}


// [InsertRow]
#include <iostream>
using namespace std;

int main() {
    int m, n, a, b;
    cin >> m >> n;
    int** t = new int*[m];
    for (int i = 0; i < n; i++) t[i] = new int[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    cin >> a >> b;
    a--;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            if (i < a) cout << t[i][j] << ' ';
            else if (i == a) cout << b << ' ';
            else cout << t[i - 1][j] << ' ';
        }
        cout << endl;
    }
}


// [SumPerRow]
#include <iostream>
using namespace std;

int main() {
    int n, m, sum, _c;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> _c;
            sum += _c;
        }
        cout << sum << ' ';
    }
}


// [DeleteColumn]
#include <iostream>
using namespace std;

int main() {
    int m, n, a;
    cin >> m >> n;
    int** t = new int*[m];
    for (int i = 0; i < n; i++) t[i] = new int[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    cin >> a;
    a--;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j == a) continue;
            else cout << t[i][j] << ' ';
        }
        cout << endl;
    }
}


// [DeleteRow]
#include <iostream>
using namespace std;

int main() {
    int m, n, a;
    cin >> m >> n;
    int** t = new int*[m];
    for (int i = 0; i < n; i++) t[i] = new int[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    cin >> a;
    a--;
    for (int i = 0; i < m; i++) {
        if (i == a) continue;
        for (int j = 0; j < n; j++) cout << t[i][j] << ' ';
        cout << endl;
    }
}


// [BookingTicket]
#include <iostream>
using namespace std;

int main() {
    int m, n, a, b;
    cin >> m >> n;
    bool** t = new bool*[m];
    for (int i = 0; i < n; i++) t[i] = new bool[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    cin >> a >> b;
    if (t[a - 1][b - 1]) cout << "Seat " << a << b << " is sold.\n";
    else cout << "Your seat is booked. Please complete the payment.\n";
}


// [Determinant]
#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) cin >> a[i][j];
    cout << (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1])
          - (a[0][2] * a[1][1] * a[2][0]) - (a[0][1] * a[1][0] * a[2][2]) - (a[0][0] * a[1][2] * a[2][1])
         << endl;
}


// [Sudoku]
#include <iostream>
using namespace std;

bool check(int map[9][9], int x, int row, int col) {
    for (int i = 0; i < 9; i++) if (map[row][i] == x) return false;
    for (int i = 0; i < 9; i++) if (map[i][col] == x) return false;
    int x = (row / 3) * 3, y = (col / 3) * 3;
    for (int j = x; j < x + 3; j++) 
        for (int i = y; i < y + 3; i++) 
            if (map[i][j] == x) return false;
    return true;
}

int main() {
    int a[9][9];
    for (int i = 0; i < 9; i++) 
        for (int j = 0; j < 9; j++) 
            cin >> a[i][j];
    
    int n, i, j;
    cin >> n >> i >> j;
    
    if (n < 1 || n > 9) {
        cout << "Invalid number.\n";
        return 0;
    }
    
    if (i < 1 || j < 1) {
        cout << "Invalid place.\n";
        return 0;
    }

    i--;
    j--;

    if (a[i][j] != 0) {
        cout << "Invalid place.\n";
    } else if (!check(a, n, i, j)) {
        cout << "Invalid place.\n";
    } else {
        cout << "Valid place.\n";
    }
}


// [SumPerRowK]
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n, a;
    double sum = 0;
    cin >> m >> n;
    double** t = new double*[m];
    for (int i = 0; i < m; i++) t[i] = new double[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
    cin >> a;
    a--;
    for (int i = 0; i < n; i++) sum += t[a][i];
    cout << fixed << setprecision(2) << sum << endl;
}