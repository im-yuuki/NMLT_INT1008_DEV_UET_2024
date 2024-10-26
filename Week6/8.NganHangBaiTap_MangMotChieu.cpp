// [SumOfOddNumbersInArray]
#include <iostream>
using namespace std;

int main() {
    int n, current, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (current % 2) sum += current;
    }
    cout << sum;
}


// [ProductOfArray]
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double current, sum = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> current;
        sum *= current;
    }
    cout << fixed << setprecision(2) << sum;
}


// [MultipleOf3And5]
#include <iostream>
using namespace std;

int main() {
    int n, current, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (current % 15 == 0) sum += current;
    }
    cout << sum;
}


// [CountOddEvenNumbers]
#include <iostream>
using namespace std;

int main() {
    int n, current, odd = 0, even = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (current % 2) odd++;
        else even++;
    }
    cout << even << ' ' << odd;
}


// [CountNumberTypes]
#include <iostream>
using namespace std;

int main() {
    int n, current, neg = 0, pos = 0, zero = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (current == 0) zero++;
        else if (current > 0) pos++;
        else neg++;
    }
    cout << neg << ' ' << pos << ' ' << zero;
}


// [Statistics2]
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, current, min, max;
    double avg;
    cin >> n;
    cin >> avg;
    min = max = avg;
    for (int i = 1; i < n; i++) {
        cin >> current;
        avg += current;
        if (current < min) min = current;
        if (current > max) max = current;
    }
    avg /= n;
    cout << fixed << setprecision(2) << avg << endl << max << endl << min;
}


// [PrintEvenNumbers]
#include <iostream>
using namespace std;

int main() {
    int n, current;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (current % 2 == 0) cout << current << ' ';
    }
}


// [SwapTwoElements]
#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x >> y;
    int r = a[--x];
    a[x] = a[--y];
    a[y] = r;
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}


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


// [GoldPrice]
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double current, min, max;
    cin >> n;
    cin >> current;
    min = max = current;
    for (int i = 1; i < n; i++) {
        cin >> current;
        if (current < min) min = current;
        if (current > max) max = current;
    }
    cout << fixed << setprecision(2) << max << ' ' << min;
}


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


// [CompareArray]
void readArray(int array[], int n) {
    for (int i = 0; i < n; i++) cin >> array[i];
}

bool compareArray(int array1[], int array2[], int n) {
    for (int i = 0; i < n; i++) if (array1[i] != array2[i]) return false;
    return true;
}
