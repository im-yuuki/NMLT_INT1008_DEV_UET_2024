#include <string>
using namespace std;

// [PigLatin]
string pigLatin(string word) {
    char start = word[0];
    if (start == 'a' || start == 'e' || start == 'i' || start == 'o' || start == 'u') return word + "way";
    else return word.substr(1) + start + "ay";
}