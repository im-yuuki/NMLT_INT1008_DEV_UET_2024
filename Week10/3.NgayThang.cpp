// [Date]
#include <cstdio>

struct date {
    int d, m, y;
};

int max_d(int m, int y) {
    if ((m < 8) ? (m % 2 == 1) : (m % 2 == 0)) return 31;
    else if (m == 2) return (y % 4 == 0) ? 29 : 28;
    else return 30;
}

date next(const date &curr) {
    date _new;
    int _maxdays = max_d(curr.m, curr.y);
    _new.d = curr.d + 1;
    _new.m = curr.m;
    _new.y = curr.y;
    if (_new.d > _maxdays) {
        _new.d = 1;
        _new.m++;
    }
    if (_new.m > 12) {
        _new.m = 1;
        _new.y++;
    }
    return _new;
}

int main() {
    date curr;
    scanf("%d/%d/%d", &curr.d, &curr.m, &curr.y);
    if (curr.d > max_d(curr.m, curr.y || curr.m > 12)) {
        printf("INVALID\n");
        return 0;
    }
    date nd = next(curr);
    printf("%02d/%02d/%04d\n", nd.d, nd.m, nd.y);
}
