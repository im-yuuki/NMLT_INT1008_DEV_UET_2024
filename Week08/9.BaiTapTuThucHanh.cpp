// [InsertXInToPostionY]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int x, y;
    cin >> x >> y;
    y--;
    for (int i = 0; i <= n; i++) {
        if (i < y) cout << arr[i];
        else if (i == y) cout << x;
        else cout << arr[i - 1];
        cout << ' ';
    }
}


// [DeletePositionX]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int x;
    cin >> x;
    x--;
    for (int i = 0; i < n - 1; i++) {
        if (i < x) cout << arr[i];
        else cout << arr[i + 1];
        cout << ' ';
    }
}


// [AscendingSorted]
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
}


// [DescendingSorted]
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[500];
    cin >> n;
    for (int i = 0; i < n; i ++) cin >> a[i];
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i ++) cout << a[i] << ' ';
    cout << endl;
}


// [MixedSort1]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    vector<int> odd, even;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> val;
        if (val % 2 == 0) even.push_back(val);
        else odd.push_back(val);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    for (int i = 0; i < (int)even.size(); i++) cout << even[i] << ' ';
    for (int i = 0; i < (int)odd.size(); i++) cout << odd[i] << ' ';
    cout << endl;
}


// [FastestFinger]
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Word {
    string word;
    int originalIndex;
};

bool compareWords(const Word &a, const Word &b) {
    return a.word < b.word;
}

int main() {
    Word words[4];

    for (int i = 0; i < 4; i++) {
        getline(cin, words[i].word);
        words[i].originalIndex = i;
    }

    sort(words, words + 4, compareWords);

    for (int i = 0; i < 4; i++) {
        cout << (char)('A' + words[i].originalIndex) << " ";
    }

    return 0;
}


// [FindingNemo]
#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cin >> n;
    string* arr = new string[n];
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
        if (arr[i].empty()) cin >> arr[i];
        if(arr[i] == "Nemo") pos = i;
    }
    cout << arr[(pos - 1) % n] << " and " << arr[(pos + 1) % n];
}


// [FindOccurrences]
#include <iostream>
using namespace std;

int count(const string& str, const string& sub) {
    int count = 0;
    size_t pos = str.find(sub);

    while (pos != string::npos) {
        count++;
        pos = str.find(sub, pos + sub.length());
    }

    return count;
}

int main() {
    string str, sub;
    getline(cin, str);
    getline(cin, sub);
    cout << count(str, sub) << endl;

    return 0;
}


// [InsertWithoutChangingOrder]
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    double* a = new double[n + 1];
    for (int i = 0; i <= n; i ++) cin >> a[i];
    sort(a, a + n + 1);
    cout << fixed << setprecision(2);
    for (int i = 0; i <= n; i ++) cout << a[i] << ' ';
    cout << endl;
}


// [LongestHarmoniousSubsequence]
#include <unordered_map>

using namespace std;

int findLHS(int arr[], int n) {
    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    int maxLength = 0;

    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        int currentNum = it->first;
        
        if (frequency.find(currentNum + 1) != frequency.end()) {
            int currentLength = it->second + frequency[currentNum + 1];
            maxLength = max(maxLength, currentLength);
        }
    }

    return maxLength;
}


// [Permutation]
#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) { 
        for (int i = 0; i < 5; i++) {
            if (i == n) cout << "Q ";
            else cout << "* ";
        }
        cout << endl;
    }
}


// [SevenNumber]
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    bool found = false;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 7) {
            cout << i << ' ';
            found = true;
        }
    }
    if (!found) cout << "Not found\n";
}