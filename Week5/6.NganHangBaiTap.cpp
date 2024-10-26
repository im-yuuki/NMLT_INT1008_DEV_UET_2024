// [CountOddDigits]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int v, odd = 0, even = 0;
        cin >> v;
        while (v) {
            if (v % 2) even ++;
            else odd ++;
            v /= 10;
        }
        cout << odd << ' ' << even << endl;
    }
}


// [CheckOddEven]
#include <iostream>
using namespace std;

bool check(unsigned long long n) {
    bool isEven = n % 2;
    n /= 10;
    while(n) {
        if (n % 2 != isEven) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n, v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        cout << (check(v) ? "yes" : "no") << endl;
    }
}


// [MaxOddDivisor]
#include <iostream>
using namespace std;

int func(int n) {
    for (int i = n - 1; i > 0; i--) {
        if (i % 2 == 0) continue;
        if (n % i == 0) return i;
    }
    return 1;
}

int main() {
    int n, v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        cout << func(v) << endl;
    }
}


// [PrimeDigits]
#include <iostream>
using namespace std;

int function(int n) {
    int cnt = 0;
    while (n) {
        int digit = n % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) cnt++;
        n /= 10;
    }
    return cnt;
}

int main() {
    int n, v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        cout << function(v) << endl;
    }
}


// [Circle]
bool circle(string moves) {
    int offsetX = 0, offsetY = 0;
    for (int i = 0; i < (int)moves.size(); i++) switch (moves[i]) {
        case 'L': 
            offsetX--;
            break;
        case 'R': 
            offsetX++;
            break;
        case 'D': 
            offsetY--;
            break;
        case 'U': 
            offsetY++;
            break;
    }
    return (offsetX == 0) && (offsetY == 0);
}


// [CollinearPoints]
bool isCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) == 0;
}


// [Floyd'sTriangle]
void printFloydsTriangle(int nRows) {
    int num = 1;
    for (int i = 1; i <= nRows; i++) {
        for (int j = 0; j < i; j++) cout << num++ << ' ';
        cout << endl;
    }
}


// [IsomorphicWords]
bool isIsomorphic(string a, string b) {
    if (a.size() != b.size()) return false;
    char atb[26] = {0}, bta[26] = {0};
    for (size_t i = 0; i < a.size(); ++i) {
        int c_a = a[i] - 'a';
        int c_b = b[i] - 'a';
        if (atb[c_a] == 0 && bta[c_b] == 0) {
            atb[c_a] = b[i];
            bta[c_b] = a[i];
        } else if (atb[c_a] != b[i] || bta[c_b] != a[i]) {
            return false;
        }
    }

    return true;
}


// [TriangleTypes]
int getTriangleType(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) return 0;
    if (a == b && b == c) return 2;
    if (a == b || b == c || a == c) return 1;
    return 3;
}


// [UglyNumber]
bool isUgly(int n) {
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;
    return n == 1;
}