// [AbsoluteValue]
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cin >> n;
    cout << abs(n) << endl;
}


// [Max]
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cout << max(m, n) << endl;
}


// [AllEqual]
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a == b && b == c) ? "true" : "false") << endl;
}


// [Divisibility]
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << ((a % 7 == 0 && b % 7 == 0) ? "true" : "false") << endl;
}


// [CheckEvenOdd]
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << ((a % 2 == 0) ? "true" : "false") << endl;
}


// [Grade]
#include <iostream>
using namespace std;

int main() {
    float sc;
    cin >> sc;
    if (sc >= 9.0 && sc <= 10.0) cout << "A+" << endl;
    else if (sc >= 8.5 && sc < 9.0) cout << "A" << endl;
    else if (sc >= 8.0 && sc < 8.5) cout << "B+" << endl;
    else if (sc >= 7.0 && sc < 8.0) cout << "B" << endl;
    else if (sc >= 6.5 && sc < 7.0) cout << "C+" << endl;
    else if (sc >= 5.5 && sc < 6.5) cout << "C" << endl;
    else if (sc >= 5.0 && sc < 5.5) cout << "D+" << endl;
    else if (sc >= 4.0 && sc < 5.0) cout << "D" << endl;
    else cout << "F" << endl;
}


// [Graduation]
#include <iostream>
using namespace std;

int main() {
    double sc;
    cin >> sc;
    if (sc >= 3.6) cout << "Xuat sac" << endl;
    else if (sc >= 3.2) cout << "Gioi" << endl;
    else if (sc >= 2.5) cout << "Kha" << endl;
    else if (sc >= 2.0) cout << "Trung binh" << endl;
    else cout << "Khong ra duoc truong" << endl;
}


// [GymnasticScorer]
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    double a[6];
    for (int i = 0; i < 6; i++) cin >> a[i];
    sort(a, a + 6);
    cout << (double)round((a[1] + a[2] + a[3] + a[4]) * 2.5) / 10 << endl;
}


// [Hurricane]
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 74) cout << 0 << endl;
    else if (x < 96) cout << 1 << endl;
    else if (x < 111) cout << 2 << endl;
    else if (x < 131) cout << 3 << endl;
    else if (x < 156) cout << 4 << endl;
    else cout << 5 << endl;
}


// [NumberInRange]
#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    cout << ((x > 0 && x < 1) ? "true" : "false") << endl;
}


// [Season]
#include <iostream>
using namespace std;

int main() {
    int d, m;
    cin >> d >> m;
    if ((m == 3 && d >= 21) || m == 4 || m == 5 || (m == 6 && d <= 21)) {
        cout << "Spring" << endl;
    } 
    else if ((m == 6 && d >= 22) || m == 7 || m == 8 || (m == 9 && d <= 22)) {
        cout << "Summer" << endl;
    } 
    else if ((m == 9 && d >= 23) || m == 11 || m == 11 || (m == 12 && d <= 21)) {
        cout << "Autumn" << endl;
    } 
    else cout << "Winter" << endl;
    return 0;
}
