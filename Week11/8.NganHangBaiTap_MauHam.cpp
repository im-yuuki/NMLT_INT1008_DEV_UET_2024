// [Unique]
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    cout << distance(numbers.begin(), unique(numbers.begin(), numbers.end())) << endl;
}


// [next_permutation]
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    next_permutation(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


// [InputFunction]
template <class T>
void input(T &x) {
    cin >> x;
}


// [PerfectNumberFunction]
template <class T>
bool isPerfect(T x) {
    T sum = 0;
    for (T i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }
    return sum == x;
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


// [HammingDistance]
int hammingDistance(int x, int y) {
    int _xor = x ^ y, count = 0;
    while (_xor) {
        count += _xor & 1;
        _xor >>= 1;
    }
    return count;
}


// [Harmonic]
double harmonic(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}


// [PasswordEntry]
void printDigits(vector<int> digits) {
    for (int i = 0; i < (int)digits.size(); i++) cout << digits[i];
    cout << endl;
}

vector<int> getDigits(unsigned int number) {
    vector<int> digits;
    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

vector<int> getCorrectResponse(vector<int> pin, vector<int> num) {
    vector<int> res;
    for (int i = 0; i < (int)pin.size(); i++) res.push_back(num[pin[i]]);
    return res;
}


// [MEDIAN - HARD]
int Median(int a[], int n) {
    if (a[0] < a[1]) swap(a[0], a[1]);
    if (a[2] < a[3]) swap(a[2], a[3]);
    int x1 = max(a[1], a[3]);
    int x2 = min(a[0], a[2]);
    int median = max(x1, min(x2, a[4]));
    return median;
}


// [WinterIsComing]
int findRadius(vector<int>& houses, vector<int>& heaters) {
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    
    int radius = 0;
    int i = 0;
    int j = 0;
    
    while (i < (int)houses.size()) {
        while (j < (int)heaters.size() - 1 && abs(houses[i] - heaters[j]) >= abs(houses[i] - heaters[j + 1])) {
            j++;
        }
        radius = max(radius, abs(houses[i] - heaters[j]));
        
        i++;
    }
    return radius;
}