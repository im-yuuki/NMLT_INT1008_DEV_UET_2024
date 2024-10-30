// [File - EasyQuiz]
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filePath;
    getline(cin, filePath);

    ifstream file(filePath);
    if (file.is_open()) {
        cout << "YES\n";
        file.close();
    } else {
        cout << "NO\n";
    }

    return 0;
}


// [HiddenClue]
void showClue (char* path) {
    ifstream file(path);
    if (file.is_open()) {
        string str;
        getline(file, str);
        cout << str;
        file.close();
    }
}


// [CountCharactersFromFile]
int countCharacter(const char* path, char letter) {
    char letter2 = (letter >= 'a') ? letter - 'a' + 'A' : letter - 'A' + 'a';
    ifstream file(path);
    string s;
    int count = 0;
    while(getline(file, s))
        for (int i = 0; i < (int)s.size(); i++)
            if (s[i] == letter || s[i] == letter2) count++;
    return count;
}


// [CharacterCounter]
int count(char sentence[], char character) {
    int cnt = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == character) cnt++;
    }
    return cnt;
}


// [toLower]
string toLower(string s) {
    for (int i = 0; i < (int)s.size(); i++) if (s[i] >= 'A' && s[i] <= 'Z') {
        s[i] = (char)(s[i] - 'A' + 'a');
    }
    return s;
}


// [NumberOfLines]
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filePath;
    getline(cin, filePath);

    ifstream file(filePath);
    if (file.is_open()) {
        int count = 0;
        string line;
        while (getline(file, line)) {
            count++;
        }
        cout << ++count << endl;
        file.close();
    } else {
        cout << "Mission failed\n";
    }

    return 0;
}


// 7
bool areAnagrams(string str1, string str2) {
    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < (int)str1.length(); i++) {
        int idx1 = -1;
        if (str1[i] >= 'a' && str1[i] <= 'z') idx1 = str1[i] - 'a';
        else if (str1[i] >= 'A' && str1[i] <= 'Z') idx1 = str1[i] - 'A';
        if (idx1 > 0) count1[idx1]++;
    }
    for (int i = 0; i < (int)str2.length(); i++) {
        int idx2 = -1;
        if (str2[i] >= 'a' && str2[i] <= 'z') idx2 = str2[i] - 'a';
        else if (str2[i] >= 'A' && str2[i] <= 'Z') idx2 = str2[i] - 'A';
        if (idx2 > 0) count2[idx2]++;
    }
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}


// [FibonacciWord]
#include <iostream>
using namespace std;

int main() {
    string fib[11];
    fib[0] = "a";
    fib[1] = "b";
    cout << "f(0) = a\nf(1) = b\n";
    for (int i = 2; i < 11; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << "f(" << i << ") = " << fib[i] << endl;
    }
}