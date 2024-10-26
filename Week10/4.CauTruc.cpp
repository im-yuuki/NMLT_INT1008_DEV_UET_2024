// [Struct]
#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
    
    Vector (double _x, double _y){
        x = _x;
        y = _y;
    }
    
    void printVector(){
        cout << x << " " << y << endl;
    }
};

Vector addVector(const Vector &v1, const Vector &v2) {
    return Vector(v1.x + v2.x, v1.y + v2.y);
}

int main() {
    Vector a = Vector(0, 0), b = Vector(0, 0);
    cin >> a.x >> a.y >> b.x >> b.y;
    Vector sum = addVector(a, b);
    cout << sum.x << ' ' << sum.y << endl;
}