// [Stranger]
#include <iostream>
#include <string>
using namespace std;

int main() {
    string p1, p2;
    cin >> p1 >> p2;
    cout << "Hello " << p1 << " and " << p2 << ".\n";
    return 0;
}


// [CelsiusTranfer]
#include <cstdio>

int main() {
    float f;
    scanf("%f", &f);
    printf("%.2f", f * 1.8f + 32);
}


// [DayOfWeek]
#include <iostream>
using namespace std;

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    int y0 = y - (14 - m) / 12;
    int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = m + 12 * ((14 - m) / 12) - 2;
    int d0 = (d + x + 31 * m0 / 12) % 7;
    cout << d0 << endl;
}


// [EuclideanDistance]
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    float x = x2 - x1;
    float y = y2 - y1;
    cout << fixed << setprecision(2);
    cout << sqrt(x * x + y * y) << endl;
}


// [MapScale]
#include <cstdio>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.1f", a / 100 / b);
}


// [RentDepartment]
#include <cstdio>

int main() {
    float a;
    scanf("%f", &a);
    printf("%.2f", a * 20);
}


// [SecondsToMinutes]
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float sec;
    cin >> sec;
    cout << ceil(sec / 60);
}


// [ShoppingOnline]
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x;
    cin >> x;
    cout << fixed << setprecision(2);
    cout << (x * 1.4 + 10);
}


// [ThreeSort]
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3, greater<int>());
    for (int i = 0; i < 3; i++) cout << a[i] << ' ';
    cout << endl;
}


// [WindChill]
#include <cstdio>
#include <cmath>

int main() {
    float t, v;
    scanf("%f %f", &t, &v);
    printf("%.2f", 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * std::pow(v, 0.16));
}