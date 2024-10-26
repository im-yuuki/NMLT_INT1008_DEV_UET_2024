// [ArrayBegins]
#include <iostream>
using namespace std;

int main() {
    int n, a[21];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}


// [PrintArray]
void readArray(int a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}


// [SumOfArray]
#include <iostream>
using namespace std;

int main() {
    int n, v, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        sum += v;
    }
     cout << sum << endl;
}


// [Statistics 1]
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getMean(const double* nums, const int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) sum += nums[i];
    return sum / n;
}

double getVariance(const double* nums, const int n, const double mean) {
    double variance = 0;
    for (int i = 0; i < n; i++) variance += (nums[i] - mean) * (nums[i] - mean);
    return variance / n;
}

int main() {
    int n;
    double nums[101];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> nums[i];
    
    double mean = getMean(nums, n);
    double variance = getVariance(nums, n, mean);
    cout << fixed << setprecision(2) << mean << ' ' << variance << endl;
}


// [StockIndex]
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double previous, current;
    cin >> previous;
    cout << fixed << setprecision(2);
    for (int i = 1; i < n; i++) {
        cin >> current;
        cout << abs(current - previous) << ' ';
        previous = current;
    }
}


// [Characters]
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main () {

    char s[100],t[100];
    cin >> s;
    cin >> t;
    int count = 0;
    for (int i = 0; i < (int)min(strlen(s), strlen(t)); i++) if (s[i] == t[i]) count++;
    cout << count << endl;
    return 0;
}


// [WordCounting]
#include <iostream>
using namespace std;

int main() {
    string s;
    int count = 0;
    while (cin >> s) count++;
    cout << count;
    if (count == 1) cout << " word\n";
    else cout << " words\n";
}


// [TwoDimensionArray]
#include <iostream>
using namespace std;

int main() {
    int m, n, q, a, b;
    cin >> m >> n >> q;
    int** table = new int*[m];
    for (int i = 0; i < n; i++) table[i] = new int[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> table[i][j];
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << table[a - 1][b - 1] << endl;
    }
}


// [MatrixQueries]
#include <iostream>
using namespace std;

int main() {
    int m, n, q, a, b;
    cin >> m >> n >> q;
    int** table = new int*[m];
    for (int i = 0; i < n; i++) table[i] = new int[n];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> table[i][j];
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << table[a - 1][b - 1] << endl;
    }
}


// [MatrixAddition]
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    double** table1 = new double*[m];
    for (int i = 0; i < n; i++) table1[i] = new double[n];
    
    double** table2 = new double*[m];
    for (int i = 0; i < n; i++) table2[i] = new double[n];
    
    
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> table1[i][j];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) cin >> table2[i][j];
    
    cout << fixed << setprecision(2);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << table1[i][j] + table2[i][j] << ' ';
        cout << endl;
    }
}