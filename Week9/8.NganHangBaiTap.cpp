// [RightAdding]
#include <cstring>

void pad_right(char *s, int n) {
    int i = strlen(s);
    while (i < n) {
        s[i] = '_';
        s[++i] = '\0';
    }
}


// [LeftAdding]
#include <cstring>

void pad_left(char *s, int n) {
    int len = strlen(s);
    if (len >= n) return;
    else {
        int offset = n - len;
        for (int i = n - 1; i >= offset; i--) s[i] = s[i - offset];
        for (int i = 0; i < offset; i++) s[i] = '_';
        s[n] = '\0';
    }
}


// [trim_right]
#include <cstring>

void trim_right(char *s) {
    for (int i = strlen(s) - 1; i >= 0; i++) if (s[i] != ' ') {
        s[++i] = '\0';
        return;
    }
}


// [Trim_Left]
#include <cstring>

void trim_left(char *s) {
    int offset, len = strlen(s);
    for (int i = 0; i < len; i++) if (s[i] != ' ') {
        offset = i--;
        break;
    }
    for (int i = offset; i < len; i++) s[i - offset] = s[i];
    s[len - offset] = '\0';
}


// [Reverse]
#include <cstring>

void reverse(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char r = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = r;
    }
}


// [GetSum]
int getSum(int *a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    return sum;
}


// [Delete_Char]
#include <cstring>

void delete_char(char *s, char c) {
    int offset = 0;
    for (int i = 0; i <= (int)strlen(s); i++) {
        if (s[i] == c) offset++;
        else s[i - offset] = s[i];
    }
}


// [Merge]
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int* newArr = new int[lenArr1 + lenArr2];
    int idx1 = 0, idx2 = 0;

    bool isAscending = firstArr[0] < firstArr[lenArr1 - 1];
    
    for (int i = 0; i < lenArr1 + lenArr2; i++) {
        if (idx1 == lenArr1) {
            newArr[i] = secondArr[idx2++];
        } else if (idx2 == lenArr2) {
            newArr[i] = firstArr[idx1++];
        } else {
            if (isAscending) {
                if (firstArr[idx1] <= secondArr[idx2]) newArr[i] = firstArr[idx1++];
                else newArr[i] = secondArr[idx2++];
            } else {
                if (firstArr[idx1] >= secondArr[idx2]) newArr[i] = firstArr[idx1++];
                else newArr[i] = secondArr[idx2++];
            }
        }
    }
    
    return newArr;
}


// [GetDataFromPointer]
#include <iostream>
using namespace std;

int main() {
    int *pointer = new int;
    cin >> *pointer;
    cout << *pointer;
    return 0;
}


// [getPointerToTen]
int* getPointerToTen() {
    int* ten = new int;
    *ten = 10;
    return ten;
}


// [PrintImage]
#include <iomanip>

void printImage(int** img, int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << setw(4) << img[i][j];
        }
        cout << endl;
    }
}


// [SelfDividingNumbers]
bool check(int n) {
    int num = n;
    while (n) {
        int divisor = n % 10;
        if (divisor == 0) return false;
        if (num % divisor != 0) return false;
        n /= 10;
    }
    return true;
}

int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* arr = new int[500];
    int idx = 0;
    for (int i = left; i <= right; i++) if (check(i)) arr[idx++] = i;
    *returnSize = idx;
    return arr;
}


// [SquareWithPointer]
double* getSquare (double number) {
    double* sq = new double;
    *sq = number * number;
    return sq;
}


// [Transpose Matrix]
int** transpose (int** matrix, int m, int n) {
    int** ans = new int*[n];
    for (int i = 0; i < n; i++) ans[i] = new int[m];
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) ans[j][i] = matrix[i][j];
    return ans;
}