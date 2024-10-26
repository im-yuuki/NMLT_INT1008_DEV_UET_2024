// [AboveAverage]
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<double> num(n);
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
        sum += num[i];
    }
    double average = sum / n;
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; ++i) {
        if (num[i] >= average) {
            cout << num[i] << " ";
        }
    }
    
    cout << endl;
    return 0;
}
