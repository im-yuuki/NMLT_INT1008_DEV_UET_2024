// [Template Statistics]
template <class T>
void printStatistics(T a[], int n) {
    T _max = a[0], _min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > _max) _max = a[i];
        if (a[i] < _min) _min = a[i];
    }
    cout << _max << ' ' << _min << endl;
}


// [Template Max Of Two]
template <class T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}


// [Get Sum Of Two]
template <class T>
T getSum(T a, T b) {
    return a + b;
}


// [Get Sum Of An Array]
template <class T>
T getSum(T a[], int n) {
    T sum = (T)0;
    for (int i = 0; i < n; i ++) sum += a[i];
    return sum;
}


// [Output Function]
template <class T>
void output(const T &x) {
    cout << x;
}


// [Check Prime Number]
template <class T>
bool isPrime(T val) {
    if (val < 2) return false;
    if (val < 4) return true;
    for (T i = 2; i * i <= val; i++) {
        if (val % i == 0) return false;
    }
    return true;
}


// [HappyNumber]
#include <unordered_set>

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappyNumber(int n) {
    std::unordered_set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = sumOfSquares(n);
    }
    return n == 1;
}


// [LongestHarmoniousSubsequence]
#include <unordered_map>

using namespace std;

int findLHS(int arr[], int n) {
    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    int maxLength = 0;

    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        int currentNum = it->first;
        
        if (frequency.find(currentNum + 1) != frequency.end()) {
            int currentLength = it->second + frequency[currentNum + 1];
            maxLength = max(maxLength, currentLength);
        }
    }

    return maxLength;
}


// [Template Swap]
template<class T>
void swapNumber(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}