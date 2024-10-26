// [Khối switch...case]
#include <iostream>
using namespace std;

string zodiac_sign(int d, int m) {
    if ((m == 3 && d >= 21) || (m == 4 && d <= 19))
        return "Bach Duong";
    else if ((m == 4 && d >= 20) || (m == 5 && d <= 20))
        return "Kim Nguu";
    else if ((m == 5 && d >= 21) || (m == 6 && d <= 21))
        return "Song Tu";
    else if ((m == 6 && d >= 22) || (m == 7 && d <= 22))
        return "Cu Giai";
    else if ((m == 7 && d >= 23) || (m == 8 && d <= 22))
        return "Su Tu";
    else if ((m == 8 && d >= 23) || (m == 9 && d <= 22))
        return "Xu Nu";
    else if ((m == 9 and d >= 23) || (m == 10 && d <= 23))
        return "Thien Binh";
    else if ((m == 10 && d >= 24) || (m == 11 && d <= 22))
        return "Thien Yet";
    else if ((m == 11 && d >= 23) || (m == 12 && d <= 21))
        return "Nhan Ma";
    else if ((m == 12 && d >= 22) || (m == 1 && d <= 19))
        return "Ma Ket";
    else if ((m == 1 && d >= 20) || (m == 2 && d <= 18))
        return "Bao Binh";
    else if ((m == 2 && d >= 19) || (m == 3 && d <= 20))
        return "Song Ngu";
    return "";
}

int main() {
    int d, m;
    cin >> d >> m;
    cout << zodiac_sign(d, m) << endl;
    return 0;
}
