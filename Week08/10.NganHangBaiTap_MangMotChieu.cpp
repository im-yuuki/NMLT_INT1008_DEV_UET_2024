// [DigitsSort]
#include <cstdio>
#include <cstring>
#include <algorithm>

void sortStr(char* str) {
    std::sort(str, str + strlen(str));
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char str[101];
        scanf("%s", str);
        sortStr(str);
        printf("%s\n", str);
    }
}


// [PrimeNumbersSort]
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    if (num < 4) return true;
    for (int i = 2; i * i <= num; i++) if (num % i == 0) return false;
    return true;
}

int main() {
    int n, a[500];
    vector<int> primes;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
        if (isPrime(a[i])) {
            primes.push_back(a[i]);
            a[i] = INT_MAX;
        }
    }
    sort(primes.begin(), primes.end());
    vector<int>::iterator it = primes.begin();
    for (int i = 0; i < n; i ++) {
        if (a[i] == INT_MAX) a[i] = *(it++);
        cout << a[i] << ' ';
    }
    cout << endl;
}


// [CanPlaceFlowers]
bool canPlaceFlowers (int flowerbed[], int n, int k) {
    int i = 0, count = 0;
    while (i < n) {
        if (flowerbed[i] == 0) {
            int next = (i == n - 1) ? 0 : flowerbed[i + 1];
            int prev = (i == 0) ? 0 : flowerbed[i - 1];
            if (next == 0 && prev == 0) {
                flowerbed[i] = 1;
                count++;
            }
        }
        i++;
    }
    return count >= k;
}


// [Intertwined]
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> result;
    for (int i = 0; i < n; i++) {
        result.push_back(a[i]);
        result.push_back(b[i]);
    }

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// [NeverGiveYouUp]
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* s = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << s[i] << ' ';
    }
}


// [PointDescending]
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    double* s = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n, greater<double>());
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << s[i] << ' ';
    }
}


// [ReversedArray]
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << fixed << setprecision(2);
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
}


// [ConditionalSort]
void sort(float arr[], int size, bool isAscending) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (isAscending) {
                if (arr[i] > arr[j]) {
                    float temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } else {
                if (arr[i] < arr[j]) {
                    float temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}


// [SymmetricArray]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n / 2; i++) if (a[i] != a[n - i - 1]) {
        cout << "Asymmetric array.";
        return 0;
    }
    cout << "Symmetric array.";
}


// [TheLastSurvivor]
#include <iostream>
using namespace std;

struct person {
    string name;
    bool alive = true;
};

int main() {
    int n, k, pos = 0;
    cin >> n >> k;
    cin.ignore();
    person* a = new person[n];
    for (int i = 0; i < n; i++) getline(cin, a[i].name);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < k; j++) do {
             pos++;
        } while (!a[pos % n].alive);
        a[pos % n].alive = false;
        while (!a[pos % n].alive) pos++;
    }
    for (int i = 0; i < n; i++) if (a[i].alive) cout << a[i].name << endl;
}