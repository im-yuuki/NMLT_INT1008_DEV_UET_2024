// [OperationOne]
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) * (a - c) << endl;
}


// [operationTwo]
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b + a * b << endl;
}


// [CharDataType]
#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    cout << (char)(x - 'a' + 'A') << endl;
}


// [Double]
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a * 2 << endl;
}


// [AverageOfSix]
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, a3;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> a3;
    double TB = a1 + b1 + c1 + (a2 + b2) * 2 + a3 * 3;
    printf("%.2f", (float)TB / 10);
    
    return 0;
}


// [BMI - Body Mass Index]
#include <cstdio>

int main() {
    float w, h;
    scanf("%f", &w);
    scanf("%f", &h);
    printf("%.2f", w / h / h);
}


// [CurrencyConversion]
#include <cstdio>

int main() {
    float vnd;
    scanf("%f", &vnd);
    printf("%.2f", vnd / 22765);
}


// [Distance]
#include <cstdio>
#include <cmath>

int main() {
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("%.2f", sqrt(a * a + b * b));
}


// [Greeting]
#include <iostream>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    cout << "Nice to meet you, " << name << "!\n";
}


// [ModAndDiv]
#include <cstdio>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d %d", a / b, a % b);
}