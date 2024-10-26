// [StringOfCharacters]
#include <iostream>
#include <string>

using namespace std;

int main () {
   string s, t;
   cin >> s;
   cin >> t;
   int cnt = 0;
   for (int i = 0; i < (int)s.size(); i++) if (s[i] == t[i]) cnt++;
   cout << cnt << endl;
}