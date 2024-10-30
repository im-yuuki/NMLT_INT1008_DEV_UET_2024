#include <fstream>
using namespace std;

// [ReverseNumberFromFile]
int reverse (char * path) {
    ifstream file(path);
    string numStr;
    file >> numStr;
    int num = 0;
    for (int i = (int)numStr.size() - 1; i >= 0; i--) {
        num *= 10;
        num += numStr[i] - '0';
    }
    return num;
}