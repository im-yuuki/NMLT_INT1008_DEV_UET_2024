// [Swap]
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
    
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
    
    return 0;
}


// [MaxThree]
int maxThree(int a, int b, int c) {
    int max = (a > b) ? a : b;
    return (max > c) ? max : c;
}


// [FactorialFunction]
long factorial(int n) {
    long ans = 1;
    for (int i = 2; i <= n; i++) ans *= i;
    return ans;
}


// [Calculator]
double calculate (double num1, char operat, double num2) {
    switch (operat) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        default: return 0;
    }
}


// [SumOfDivisors]
#include <cstdio>

int divisorsSum(int number) {
	int sum = 0;
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			sum += i;
		}
	}
	return sum;
}

int main() {
	int n, v;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &v);
		printf("%d\n", divisorsSum(v));
	}
}


// [Prime]
#include <cstdio>


int main() {
	int n;
	scanf("%d", &n);
	if (n < 2) {
		printf("Not a prime.\n");
		return 0;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			printf("Not a prime.\n");
			return 0;
		}
	}
	printf("Prime.\n");
	return 0;
}


// [BinaryRectangle]
void binaryRectangle(int nRows, int nCols) {
	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nCols; j++) {
			if (i == 0 || i == nRows - 1 || j == 0 || j == nCols - 1) printf("1");
			else printf("0");
		}
		printf("\n");
	}
}


// [PrintArrow]
void printArrow(int n, bool left) {
    if (left) {
        for (int i = n; i > 0; i--) {
            for (int j = 0; j < i - 1; j++)
                cout << " ";
            for (int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i - 1; j++)
                cout << " ";
            for (int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
        }
    } else {
        for (int i = n; i > 0; i--) {
            for (int j = 0; j < n - i; j++)
                cout << "  ";
            for (int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < n - i; j++)
                cout << "  ";
            for (int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
        }
    }
}


// [HammingDistance]
int hammingDistance(int x, int y) {
    int _xor = x ^ y, cnt = 0;
    while (_xor) {
        cnt += _xor & 1;
        _xor >>= 1;
    }
    return cnt;
}


// [SumOfDigits]
int sumOfDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}