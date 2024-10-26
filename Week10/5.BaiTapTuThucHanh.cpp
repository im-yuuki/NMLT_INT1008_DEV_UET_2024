// Struct
#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
    Vector (double _x, double _y){
        x = _x;
        y = _y;
    }
};

Vector addVector(Vector v1, Vector v2) {
    Vector vt = Vector(0, 0);
    vt.x = v1.x + v2.x;
    vt.y = v1.y + v2.y;
    return vt;
}

int main()
{
    Vector v1 = Vector(0, 0), v2 = Vector(0, 0);
    cin >> v1.x >> v1.y >> v2.x >> v2.y;
    Vector vt = addVector(v1, v2);
    cout << vt.x << ' ' << vt.y;
}


// [Rectangle]
#include <iostream>
using namespace std;

struct rectangle{
    int length, h;
};

int getPerimeter(const rectangle &rec){
    return (rec.length + rec.h) * 2;
}

int getArea(const rectangle &rec){
    return rec.length * rec.h;
}

int main() {
    rectangle rec;
    cin >> rec.length >> rec.h;
    cout << getPerimeter(rec) << ' ' << getArea(rec) << endl;
}


// [Cylinder]
#include <iostream>
using namespace std;

struct cylinder {
    int r, h;
};

const double pi = 3.14;

double getSurfaceArea(const cylinder &c) {
    return pi * c.r * 2 * c.h + pi * c.r * c.r * 2;
}

double getVolume(const cylinder &c) {
    return pi * c.r * c.r * c.h;
}

int main() {
    cylinder c;
    cin >> c.r >> c.h;
    cout << getSurfaceArea(c) << ' ' << getVolume(c) << endl;
}


// [Date]
#include <cstdio>

struct date {
    int d, m, y;
};

int max_d(int m, int y) {
    if ((m < 8) ? (m % 2 == 1) : (m % 2 == 0)) return 31;
    else if (m == 2) return (y % 4 == 0) ? 29 : 28;
    else return 30;
}

date next(const date &curr) {
    date _new;
    int _maxdays = max_d(curr.m, curr.y);
    _new.d = curr.d + 1;
    _new.m = curr.m;
    _new.y = curr.y;
    if (_new.d > _maxdays) {
        _new.d = 1;
        _new.m++;
    }
    if (_new.m > 12) {
        _new.m = 1;
        _new.y++;
    }
    return _new;
}

int main() {
    date curr;
    scanf("%d/%d/%d", &curr.d, &curr.m, &curr.y);
    if (curr.d > max_d(curr.m, curr.y || curr.m > 12)) {
        printf("INVALID\n");
        return 0;
    }
    date nd = next(curr);
    printf("%02d/%02d/%04d\n", nd.d, nd.m, nd.y);
}


// [Fraction]
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

struct frac {
    int num, denom;
    
    frac (int _num, int _denom) {
        int _gcd = gcd(_num, _denom);
        num = _num / _gcd;
        denom = _denom / _gcd;
    }
    
};

frac addconst (const frac &a, const frac &b) {
    return frac (
        a.num * b.denom + b.num * a.denom,
        a.denom * b.denom
    );
} 

int main() {
    frac a = frac(1, 1), b = frac(1, 1);
    cin >> a.num >> a.denom >> b.num >> b.denom;
    frac added = addconst(a, b);
    cout << added.num << '/' << added.denom;
}


// [Time]
#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int h, m, s;
    Time(int ih, int im, int is)
    {
        h = ih;
        m = im;
        s = is;
    }
    void getTimeDifference(Time other) {

        int ts1 = h * 3600 + m * 60 + s;
        int ts2 = other.h * 3600 + other.m * 60 + other.s;

        int diff = abs(ts2 - ts1);

        int h = diff / 3600;
        diff %= 3600;
        int m = diff / 60;
        int s = diff % 60;

        cout << setfill('0') << setw(2) << h << ':';
        cout << setfill('0') << setw(2) << m << ':';
        cout << setfill('0') << setw(2) << s << endl;
    }
};

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    Time time1(h,m,s);
    cin >> h >> m >> s;
    Time time2(h,m,s);
    time1.getTimeDifference(time2);
    
    return 0;
}
