#include <fstream>
using namespace std;

// [StealingGame]
bool canWinNim (char * path) {
    ifstream file(path);
    int n;
    file >> n;
    return n % 4 != 0;
}