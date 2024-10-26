// [Integer 2]
#include <iostream>
#include <cmath>
using namespace std;

bool check(int n) {
    int _sqrt = sqrt(n);
    if (_sqrt * _sqrt != n) return false;
    if (n % 3 != 0) return false;
    return n % 5 == 1;
}

int main() {
    int n;
    cin >> n;
    cout << (check(n) ? "YES" : "NO") << endl;
}


// [Multiple]
#include <iostream>
#include <cmath>
using namespace std;

bool check(int n) {
    return n % 5 == 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 0) {
        cout << "no" << endl;
        return 0;
    }
    cout << ((a % b == 0) ? "yes" : "no") << endl;
}


// [FahrenheitToCelsius]
#include <cstdio>

float c_k(float c) {
    return c + 273.15;
}

float f_c(float c) {
    return (c - 32) * 5 / 9;
}

int main() {
    float start, end;
    scanf("%f %f", &start, &end);
    for (float f = start; f <= end; f += 1) {
        float c = f_c(f);
        printf("%.0f %.2f %.2f\n", f, c, c_k(c));
    }
}


// [SpecialDouble]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n % 2 == 0) ? n : n * 2) << endl;
}


// [Character]
#include <cstdio>

int main() {
    char c;
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
        printf("The upper case character corresponding to %c is %c", c, c - 'a' + 'A');
    else if (c >= 'A' && c <= 'Z')
        printf("The lower case character corresponding to %c is %c", c, c - 'A' + 'a');
    else printf("%c is not a letter", c);
}


// [ValidDate]
#include <cstdio>

bool check(int d, int m, int y) {
    if (m > 12) return false;
    int max_d = 0;
    if ((m >= 8 && m % 2 == 0) || (m < 8 && m % 2 == 1)) max_d = 31;
    else if (m == 2) max_d = (y % 4 == 0) ? 29 : 28;
    else max_d = 30;
    return d <= max_d;
}

int main() {
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);
    printf(check(d, m, y) ? "yes\n" : "no\n");
}


// [Taxi]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 30) cout << 7000 + 5000 * 29 + 3000 * (n - 30) << endl;
    else if (n > 1) cout << 7000 + 5000 * (n - 1) << endl;
    else cout << 7000 * n << endl;
}


// [RentComputer]
#include <iostream>
using namespace std;

int price(int time) {
    return (time < 17) ? 2500 : 3000;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    for (int i = a; i < b; i++) sum += price(i);
    sum *= 2;
    cout << sum << endl;
}


// [Salary]
#include <iostream>
using namespace std;

int price(int time) {
    return (time < 12) ? 6000 : 7500;
}

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i < b; i++) sum += price(i);
    cout << sum << endl;
}


// [FourStepsReverse]
#include <cstdio>

int reverse(int inp) {
    int out = inp % 10;
    out *= 10;
    inp /= 10;
    out += inp % 10;
    out *= 10;
    inp /= 10;
    out += inp % 10;
    return out;
}

int main() {
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    if (a <= c) {
        printf("invalid\n");
        return 0;
    }
    int num = (a - '0') * 100 + (b - '0') * 10 + (c - '0');
    num -= reverse(num);
    printf("%d\n", num + reverse(num));
}


// [CheckTriangle]
#include <cstdio>
#include <algorithm>

int main() {
    int nums[3];
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
    std::sort(nums, nums + 3);
    if (nums[0] + nums[1] <= nums[2]) {
        printf("khong phai tam giac\n");
        return 0;
    }
    if (nums[0] == nums[1]) printf("%s\n", (nums[1] == nums[2]) ? "tam giac deu" : "tam giac can");
    else if ((nums[0] * nums[0] + nums[1] * nums[1]) == (nums[2] * nums[2])) printf("tam giac vuong\n");
    else printf("tam giac thuong\n");
}


// [Calculate Score]
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <functional>

double func(double inp) {
    inp *= 10;
    if (std::fmod(inp, 1) >= 0.5) inp += 1;
    inp = (int)inp;
    return inp / 10;
}

int main() {
    int cc;
    double th[10], gk[2], ck, st;
    scanf("%d", &cc);
    for (int i = 0; i < 10; i++) scanf("%lf", &th[i]);
    scanf("%lf %lf", &gk[0], &gk[1]);
    scanf("%lf %lf", &ck, &st);
    for (int i = 0; i < 10; i++) if (th[i] > 0) cc++;
    if (cc < 20) {
        printf("0\n");
        return 0;
    }
    double avg_th = 0, avg_gk = (gk[0] + gk[1]) / 2;
    std::sort(th, th + 10, std::greater<double>());
    for (int i = 0; i < 5; i++) avg_th += th[i];
    avg_th /= 5;
    avg_th = func(avg_th);
    avg_gk = func(avg_gk);
    ck = func(ck);
    st = func(st);
    double tk = 0.2 * (avg_th + avg_gk) + 0.6 * (ck + st);
    if (tk > 10) tk = 10;
    printf("%.1f\n", tk);
}


// [FirstEquation]
#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0) printf((b == 0) ? "phuong trinh co vo so nghiem\n" : "phuong trinh vo nghiem\n");
    else printf("%.2f\n", (float) -b / a);
}


// [Second Degree Equation]
#include <cstdio>
#include <cmath>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == 0) {
        if (b == 0) {
            printf((c == 0) ? "phuong trinh co vo so nghiem\n" : "phuong trinh vo nghiem\n");
        } else {
            printf("phuong trinh co 1 nghiem\n%.5f\n", -c / b);
        }
    } else {
        float delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            printf("phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            if (fabs(x) < 1e-6) x = 0.0;
            printf("phuong trinh co 1 nghiem\n%.5f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            if (fabs(x1) < 1e-6) x1 = 0.0;
            if (fabs(x2) < 1e-6) x2 = 0.0;
            if (x1 > x2) {
                float tmp = x1;
                x1 = x2;
                x2 = tmp;
            }
            printf("phuong trinh co 2 nghiem\n%.5f %.5f\n", x1, x2);
        }
    }
    
    return 0;
}


// [QuadraticEquation]
#include <cstdio>
#include <cmath>
#include <algorithm>

float ans[4];
int ansCount = 0;

void add(float answer) {
    ans[ansCount++] = answer;
}

void print() {
    std::sort(ans, ans + ansCount);
    if (ansCount == 0) {
        printf("phuong trinh vo nghiem\n");
        return;
    }
    printf("phuong trinh co %d nghiem\n", ansCount);
    for (int i = 0; i < ansCount; i++) printf("%.5f ", ans[i]);
}

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == 0) {
        if (b == 0) {
            printf((c == 0) ? "phuong trinh co vo so nghiem\n" : "phuong trinh vo nghiem\n");
            return 0;
        } else {
            float x = -c / b;
            if (fabs(x) < 1e-6) add(0.0);
            else if (x > 0) {
                add(sqrt(x));
                add(-sqrt(x));
            }
        }
    } else {
        float delta = b * b - 4 * a * c;
        
        if (delta == 0) {
            float x = -b / (2 * a);
            if (fabs(x) < 1e-6) add(0.0);
            else if (x > 0) {
                add(sqrt(x));
                add(-sqrt(x));
            }
        } else if (delta > 0) {
            float x1 = (-b - sqrt(delta)) / (2 * a);
            float x2 = (-b + sqrt(delta)) / (2 * a);
            if (fabs(x1) < 1e-6) add(0.0);
            else if (x1 > 0) {
                add(sqrt(x1));
                add(-sqrt(x1));
            }
            if (fabs(x2) < 1e-6) add(0.0);
            else if (x2 > 0) {
                add(sqrt(x2));
                add(-sqrt(x2));
            }
        }
    }
    print();
    return 0;
}
