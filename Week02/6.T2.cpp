// [BraSize1]
#include <cstdio>

int main() {
    int s;
    scanf("%d", &s);
    
    if (s < 63)
        printf("Sorry, we don't have your size!");
    else if (s < 68)
        printf("30");
    else if (s < 73)
        printf("32");
    else if (s < 78)
        printf("34");
    else if (s < 83)
        printf("36");
    else if (s < 88)
        printf("38");
    else if (s < 93)
        printf("40");
    else if (s < 98)
        printf("42");
    else if (s < 103)
        printf("44");
    else if (s < 108)
        printf("46");
    else
        printf("Sorry, we don't have your size!");

    return 0;
}


// [Dota2]
#include <cstdio>

int main() {
    int k;
    scanf("%d", &k);
    
    if (k == 3) printf("Killing Spree");
    else if (k == 4) printf("Dominating");
    else if (k == 5) printf("Mega Kill");
    else if (k == 6) printf("Unstoppable");
    else if (k == 7) printf("Wicked Sick");
    else if (k == 8) printf("Monster Kill");
    else if (k == 9) printf("Godlike");
    else if (k > 9) printf("Beyond Godlike");
}


// [FunctionGrowth]
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double n;
    cin >> n;
    if (n <= 0) {
        cout << "invalid\n";
        return 0;
    }
    cout << fixed << setprecision(1);
    cout << n << ' ';
    cout << log2(n) << ' ';
    cout << n * n << ' ';
    cout << pow(n, 3) << ' ';
    cout << n * 2 << endl;
}


// [Median]
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];
    sort(a, a + 5);
    cout << a[2] << endl;
}


// 5
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y) cout << "false";
    else if (x < y) cout << ((y < z) ? "true" : "false");
    else cout << ((y > z) ? "true" : "false");
}


// 6
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    double x;
    cin >> x;
    if (x < 0) cout << "So nhap nho hon 0\n";
    else cout << fixed << setprecision(2) << sqrt(x) << endl;
}


// 7
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i ++) {
        cin >> a[i];
        if (a[i] <= 0) {
            cout << "false";
            return 0;
        }
    }
    
    sort(a, a + 3);
    cout << ((a[2] * a[2] == a[0] * a[0] + a[1] * a[1]) ? "true" : "false") << endl;
}


// 8
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i ++) {
        cin >> a[i];
        if (a[i] <= 0) {
            cout << "false";
            return 0;
        }
    }
    
    cout << ((abs(a[0] - a[1]) < a[2] && a[2] < (a[0] + a[1])) ? "true" : "false") << endl;
}


// 9
#include <iostream>
using namespace std;

int main() {
    int inp;
    cin >> inp;
    switch(inp) {
        case 0:
        cout << "2.61\n";
        break;
        case 1:
        cout << "2.95\n";
        break;
        default:
        cout << "3.17\n";
        break;
    }
}


// 10
#include <cstdio>
#include <cmath>

int main() {
    float t, v;
    scanf("%f %f", &t, &v);
    printf("%.2f", 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * std::pow(v, 0.16));
}