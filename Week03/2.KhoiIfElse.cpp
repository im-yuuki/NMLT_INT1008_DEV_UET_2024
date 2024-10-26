// [Khối lệnh if...else]
#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z') cout << (char)(a - 'a' + 'A') << endl;
    else cout << a << endl;
}