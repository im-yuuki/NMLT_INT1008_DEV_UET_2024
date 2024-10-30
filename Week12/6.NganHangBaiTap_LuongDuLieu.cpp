// [MaxAndMinFromFile]
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filePath;
    getline(cin, filePath);

    ifstream file(filePath);
    if (file.is_open()) {
        int num;
        file >> num;
        int max = num, min = num;
        while (file >> num) {
            if (max < num) max = num;
            if (min > num) min = num;
        }
        cout << max << ' ' << min;
        file.close();
    } else {
        cout << "Mission failed\n";
    }
}


// [Perimeter]
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    string fileName;
    cin >> fileName;
    ifstream file(fileName);
    string tmp;
    cout << fixed << setprecision(2);
    while (file >> tmp) {
        string type;
        file >> type;
        if (type == "SQUARE") {
            double side;
            file >> tmp >> side;
            cout << side * side << endl;
        } else if (type == "RECTANGLE") {
            double width, height;
            file >> tmp >> width >> tmp >> height;
            cout << width * height << endl;
        } else if (type == "CIRCLE") {
            double radius;
            file >> tmp >> radius;
            cout << radius * 2 * 3.14159 << endl; // đề sai nha thầy ơi :))
        }
    }
}


// [RocketScience]
#include <cmath>

double estimatedTime(const char* path) {
    ifstream file(path);
    string tmp;
    double srcX, srcY, destX, destY, velocity;
    file >> tmp >> tmp >> srcX >> tmp >> srcY >> tmp >> tmp >> destX >> tmp >> destY >> tmp >> velocity;
    double x = srcX - destX;
    double y = srcY - destY;
    return sqrt(x * x + y * y) / velocity;
}


// [Grade10]
#include <sstream>

void grade10(const char* path) {
    ifstream file(path);
    string line;
    getline(file, line);
    while (getline(file, line)) {
        string tmp, fname, lname, score;
        stringstream ss(line);
        getline(ss, tmp, ',');
        getline(ss, fname, ',');
        getline(ss, lname, ',');
        getline(ss, tmp, ',');
        getline(ss, tmp, ',');
        getline(ss, score, ',');
        getline(ss, tmp, ',');
        if (score == "10") cout << fname << ' ' << lname << endl;
    }
}


// [MoveZeroes]
void moveZeroes (int * arr, char * file) {
    ifstream fp(file);
    int n;
    fp >> n;
    int idx = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        fp >> arr[idx];
        if (arr[idx] == 0) zero++;
        else {
            cout << arr[idx] << ' ';
            idx++;
        }
    }
    for (int i = n - zero; i < n; i++) {
        arr[i] = 0;
        cout << arr[i] << ' ';
    }
}


// [MaxProductOfThree]
#include <algorithm>

int maximumProduct(char *path) {
    ifstream fp(path);
    int n;
    fp >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        fp >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int maxProduct1 = arr[0] * arr[1] * arr[2];
    int maxProduct2 = arr[n-1] * arr[n-2] * arr[0];

    delete[] arr;
    return max(maxProduct1, maxProduct2);
}


// [NeedForSpeed]
#include <sstream>
#include <string>

double averageTime(const char* path) {
    ifstream file(path);

    double sum = 0;
    int n = 0;
    string line;
    getline(file, line);
    while (getline(file, line)) {
        stringstream ss(line);
        string lap, time;
        if (getline(ss, lap, ',') && getline(ss, time)) {
            sum += stod(time);
            n++;
        }
    }
    return sum / n;
}


// [NotBoringMovies]
#include <sstream>

string trim(const string &str) {
    size_t first = str.find_first_not_of(' ');
    return (first == string::npos) ? "" : str.substr(first);
}

void findMovies (char * path) {
    ifstream file(path);
    string line;
    getline(file, line);
    bool found = false;
    while (getline(file, line)) {
        stringstream ss(line);
        string tmp, name, desc, rating;
        getline(ss, tmp, ',');
        getline(ss, name, ',');
        getline(ss, desc, ',');
        getline(ss, rating);
        if (trim(desc) != "boring" && stod(rating) >= 8.0) {
            cout << trim(name) << endl;
            found = true;
        }
    }
    if (!found) cout << "All are boring!\n";
}


// [ProductExceptSelf]
void productExceptSelf (char* path) {
    ifstream file(path);
    int n;
    file >> n;
    if (n < 2) {
        cout << "-1\n";
        return;
    }
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        file >> a[i];
    }
    for (int i = 0; i < n; i++) {
        long long prod = 1;
        for (int j = 0; j < n; j++) if (j != i) prod *= a[j];
        cout << prod << ' ';
    }
}


// [HouseRobber]
#include <vector>

int getMoney(int* houses, const char* path) {
    ifstream file(path);
    vector<int> temp;
    int money;
    while (file >> money) {
        temp.push_back(money);
    }
    file.close();
    for (size_t i = 0; i < temp.size(); ++i) {
        houses[i] = temp[i];
    }
    return temp.size();
}

int rob(int* houses, int numOfHouses) {
    if (numOfHouses == 0) return 0;
    if (numOfHouses == 1) return houses[0];

    int* dp = new int[numOfHouses];
    dp[0] = houses[0];
    dp[1] = max(houses[0], houses[1]);

    for (int i = 2; i < numOfHouses; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + houses[i]);
    }

    return dp[numOfHouses - 1];
}