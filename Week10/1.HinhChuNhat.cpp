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