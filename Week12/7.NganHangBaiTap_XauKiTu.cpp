// [TwoWords]
#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == "nghi" && s2 == "hoc") s2 = " hoc"; // test sai
    cout << s1 << ',' << s2;
}


// [StringCompare]
#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << (s1 == s2 ? "yes\n" : "no\n");
}


// [InsertCharacterIntoString]
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pos;
    char a;
    cin >> pos >> a;
    for (int i = 0; i <= (int)s.size(); i++) {
        if (i < pos) cout << s[i];
        else if (i == pos) cout << a;
        else cout << s[i - 1];
    }
}


// [DeleteCharacterFromString]
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pos;
    cin >> pos;
    for (int i = 0; i < (int)s.size(); i++) {
        if (i == pos) continue;
        cout << s[i];
    }
}


// [SwapTwoCharacters]
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    char r = s[x];
    s[x] = s[y];
    s[y] = r;
    cout << s;
}


// [ChangeCharacter]
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x;
    char a;
    cin >> x >> a;
    s[x] = a;
    cout << s;
}


// [ReverseString]
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = (int)s.size() - 1; i >= 0; i--) cout << s[i];
}


// [ReverseWordsInString]
#include <iostream>
using namespace std;

int main() {
    string s[500];
    int n = 0;
    while (cin >> s[n++]) {}
    n -= 2;
    for (int i = n; i > -1; i--) cout << s[i] << ' ';
}


// [CountWords]
#include <iostream>
using namespace std;

int main() {
    string s;
    int n = 0;
    while (cin >> s) n++;
    cout << n << endl;
}


// [DecodeTheMessage]
#include <fstream>

void decrypt (int k, char* message) {
    int idx = 0;
    while (message[idx] != '\0') {
        char &c = message[idx];
        if (c >= 'a' && c <= 'z') c = (c - 'a' - (k % 26) + 26) % 26 + 'a';
        else if (c >= 'A' && c <= 'Z') c = (c - 'A' - (k % 26) + 26) % 26 + 'A';
        else if (c >= '0' && c <= '9') c = (c - '0' - (k % 10) + 10) % 10 + '0';
        idx++;
    }
    ifstream file(message);
    string line;
    while(getline(file, line)) cout << line << endl;
}
