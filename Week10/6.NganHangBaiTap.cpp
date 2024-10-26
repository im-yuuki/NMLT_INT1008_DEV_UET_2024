// [Complex]
#include <iostream>

using namespace std;

struct complexNumber {
    double rp, ip;

    complexNumber() {
        rp = 0;
        ip = 0;
    }

    complexNumber(double initRealPart, double initImaginaryPart) {
        rp = initRealPart;
        ip = initImaginaryPart;
    }

    complexNumber multiply(complexNumber other) {
        complexNumber result;
        result.rp = (rp * other.rp) - (ip * other.ip);
        result.ip = (rp * other.ip) + (ip * other.rp);
        return result;
    }
};

int main()
{
    double rp, ip;
    cin >> rp >> ip;
    complexNumber complex1(rp, ip);
    cin >> rp >> ip;
    complexNumber complex2(rp, ip);
    complexNumber product = complex1.multiply(complex2);
    cout << product.rp << " " << product.ip << endl;
    return 0;
}


// [Triangle]
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct triangle {
    int edge1, edge2, edge3;

    triangle(int ie1, int ie2, int ie3) {
        edge1 = ie1;
        edge2 = ie2;
        edge3 = ie3;
    }

    double getArea() {
        if (edge1 + edge2 <= edge3 || edge1 + edge3 <= edge2 || edge2 + edge3 <= edge1) {
            return -1;
        }
        double s = (edge1 + edge2 + edge3) / 2.0;
        double area = sqrt(s * (s - edge1) * (s - edge2) * (s - edge3));
        return area;
    }
};

int main()
{
    int edge1, edge2, edge3;
    cin >> edge1 >> edge2 >> edge3;
    triangle tri(edge1, edge2, edge3);
    double area = tri.getArea();
    if (area == -1) cout << "invalid" << endl;
    else cout << fixed << setprecision(2) << area << endl;
    return 0;
}


// [Fraction 2]
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

struct Fraction {
    int a;
    int b;
    
    Fraction() : a(0), b(1) {}
    
    Fraction(int num, int denom) {
        a = num;
        b = denom;
    }

    void simplify() {
        int gcdValue = gcd(abs(a), abs(b));
        a /= gcdValue;
        b /= gcdValue;

        if (b < 0) {
            a = -a;
            b = -b;
        }
    }

    double value() {
        if (b == 0) return -1;
        return ((double)a) / b;
    }

    void print() {
        simplify();
        cout << a << "/" << b << endl;
    }
};

Fraction add(Fraction x, Fraction y) {
    int num = x.a * y.b + y.a * x.b;
    int denom = x.b * y.b;
    return Fraction(num, denom);
}


// [StudentStruct]
#include <iomanip>

struct Student  {
    string name;
    double gpa;
    
    Student(string _name) {
        name = _name;
        gpa = 0;
    }
    
    Student(string _name, double _gpa) {
        name = _name;
        gpa = _gpa;
    }

    string grade() {
        if (gpa >= 3.6) return "xuat sac";
        else if (gpa >= 3.2) return "gioi";
        else if (gpa >= 2.5) return "kha";
        else return "khong du dieu kien";
    }
    
    void print() {
        cout << fixed << setprecision(1) << name << ' ' << gpa << ' ' << grade() << endl;
    }
};

Student get(int n) {
    Student h = Student("", 0);
    for (int i = 0; i < n; i++) {
        string name;
        double gpa;
        cin >> name >> gpa;
        if (gpa > h.gpa) {
            h.name = name;
            h.gpa = gpa;
        }
    }
    return h;
}


// [Time 2]
#include <iostream>

using namespace std;

struct Time {
    int hour, minute, second;

    Time(int initHour, int initMinute, int initSecond) {
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }
};

int checkArrivalTime(Time t1, Time t2) {
    int ts1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int ts2 = t2.hour * 3600 + t2.minute * 60 + t2.second;
    
    if (ts1 < ts2) return 1;
    if (ts1 > ts2) return -1;
    return 0;
}

int main() {
    int h, m, s;
    cin >> h >> m >> s;
    Time time1(h, m, s);
    cin >> h >> m >> s;
    Time time2(h, m, s);
    
    if (checkArrivalTime(time1, time2) == 1) cout << "1";
    else if (checkArrivalTime(time1, time2) == -1) cout << "2";
    else cout << "Equal";
}
