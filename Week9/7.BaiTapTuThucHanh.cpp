#include <bits/stdc++.h>
using namespace std;

// Con trỏ - Pointers
double* getPointerToPi() {
    double* pi = new double;
    *pi = 3.14159;
    return pi;
}


// [Normalization]
void normalize(double *out, int *in, int n) {
    for (int i = 0; i < n; i ++) out[i] = (double)in[i] / 255;
}


// [Cube]
void cube(double *p) {
    *p = (*p) * (*p) * (*p);
}


// [HigherOrLower]
bool* isHigher (int* arr, int num, int thres) {
    bool* ans = new bool[num];
    for (int i = 0; i < num; i++) ans[i] = (arr[i] >= thres);
    return ans;
}


// [ImageFilter]
int** getImage (int nRows, int nCols) {
    int** img = new int*[nRows];
    for (int i = 0; i < nRows; i++) {
        img[i] = new int[nCols];
        for (int j = 0; j < nCols; j++) cin >> img[i][j];
    }
    return img;
}

void fillImage (int** image, int nRows, int nCols, int threshold) {
    for (int i = 0; i < nRows; i++) for (int j = 0; j < nCols; j++)
        if (image[i][j] < threshold) image[i][j] = 0;
}

void print (int** image, int nRows, int nCols) {
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) cout << image[i][j] << ' ';
        cout << endl;
    }
}


// [Multiply]
void multiply (int* n, int k) {
    *n *= k;
}


// [PointerToArray]
int* getPointerToArray(int n) {
    int* ans = new int[n];
    for (int i = 0; i < n; i++) cin >> ans[i];
    return ans;
}


// [Reference Variable - Swap]
void swap(int& a, int& b) {
    int r = a;
    a = b;
    b = r;
}


// [Swap]
void swap(int* a, int* b) {
    int r = *a;
    *a = *b;
    *b = r;
}


// [TheMatrix]
int** inputMatrix(int nRows, int nCols) {
    int** mat = new int*[nRows];
    for (int i = 0; i < nRows; i++) {
        mat[i] = new int[nCols];
        for (int j = 0; j < nCols; j++) cin >> mat[i][j];
    }
    return mat;
}

void printMatrix(int** matrix, int nRows, int nCols) {
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) cout << matrix[i][j] << ' ';
        cout << endl;
    }
}


// [SymmetricMatrix]
void inputMatrix(int** matrix, int nRows, int nCols) {
    for (int i = 0; i < nRows; i++) for (int j = 0; j < nCols; j++) cin >> matrix[i][j];
}

int isSymmetric(int** matrix, int nRows, int nCols) {
    if (nRows != nCols) return 0;
    for (int i = 0; i < nRows; i++) for (int j = 0; j <= i; j++)
        if (matrix[i][j] != matrix[j][i]) return 0;
    return 1;
}


// [EvenNumberOnly]
int** keepEven (int** matrix, int nRows, int nCols) {
    for (int i = 0; i < nRows; i++) for (int j = 0; j < nCols; j++)
        if (matrix[i][j] % 2) matrix[i][j] = 0;
        
    return matrix;
}