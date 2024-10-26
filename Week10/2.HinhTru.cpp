// [Cylinder]
#include <iostream>
using namespace std;

struct cylinder{
    int r, h;
};

const double pi = 3.14;

double getSurfaceArea(const cylinder &c){
    return pi * c.r * 2 * c.h + pi * c.r * c.r * 2;
}

double getVolume(const cylinder &c){
    return pi * c.r * c.r * c.h;
}

int main() {
    cylinder c;
    cin >> c.r >> c.h;
    cout << getSurfaceArea(c) << ' ' << getVolume(c) << endl;
}