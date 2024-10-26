// [Hello World!]
#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
}


// [Banner]
#include <iostream>
using namespace std;

int main() {
    cout << "### # #  ##  ## # #\n #  # # #   #   # #\n #  ### #    #  ###\n #  # # #     #   #\n #  # #  ## ##    #\n";
}


// [Days of the week]
#include <iostream>
using namespace std;

int main() {
    cout << "Monday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nSunday\n";
}


// [Seasons]
#include <iostream>
using namespace std;

int main() {
    cout << "Spring\nSummer\nAutumn\nWinter\n";
}


// [Months of the year]
#include <iostream>
using namespace std;

int main() {
    cout << "January\nFebruary\nMarch\nApril\nMay\nJune\nJuly\nAugust\nSeptember\nOctober\nNovember\nDecember\n";
}


// [DrawTriangle]
#include <iostream>
using namespace std;

int main() {
    cout << "  *  \n *** \n*****\n";
}


// [Sum]
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a + b;
    cout << c << endl;
}


// [Friend Names]
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> vt;
    string input;
    while (cin >> input) vt.push_back(input);
    cout << "Hi";
    for (int i = vt.size() - 1; i > 0; i--) {
        cout << ' ' << vt[i];
        if (i != 1)  cout << ',';
    }
    cout << " and " << vt[0] << ".\n";
}


// [Ten Hello World]
#include <iostream>
using namespace std;

class A {
    public:
    A() {
        for (int i = 0; i < 10; ++i) cout << "Hello, world\n";
    }
};

static A obj;


// [User Input]
#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    cout << "Hi " << input << '.' << endl;
}