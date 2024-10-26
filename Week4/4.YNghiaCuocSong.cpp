// [MeaningOfLife]
#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) if (n == 42) {
        cout << "I've found the meaning of life!" << endl;
        return 0;
    }
    cout << "It's a joke!" << endl;
}
