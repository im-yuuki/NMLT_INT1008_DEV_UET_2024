// [ModAndDiv]
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a / b << ' ' << a % b << endl;
}


// [ObjectVolume]
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    printf("%.2f", a * b * c);
}


// [RealAge]
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    cout << 2017 - age << endl;
}


// [Square]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n * n << endl;
}


// [PassRate]
#include <cstdio>

int main() {
    int t, p;
    scanf("%d", &t);
    scanf("%d", &p);
    printf("%.2f", (float)p / t);
}


// [PoundToKilogram]
#include <cstdio>

const float ptg = 0.453592F;

int main() {
    float x;
    scanf("%f", &x);
    printf("%.2f", x * ptg);
}


// [Swap]
#include <iostream>
using namespace std;

int a, b, c = 0;

void print() {
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

int main() {
    cin >> a >> b;
    print();
    c = a;
    print();
    a = b;
    print();
    b = c;
    print();
}


// [Triple]
#include <cstdio>

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", x * 3);
}


// [VAT]
#include <cstdio>

int main() {
    float x;
    scanf("%f", &x);
    printf("%.2f", x * 1.1F);
}
