#include <cstdio>
#include <cstring>
#include <algorithm>

#define ML 550

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

struct bigNum {
    bool neg;
    int len;
    int num[ML];

    bigNum() {
        len = 1;
        neg = false;
        memset(num, 0, sizeof(num));
    }

    char read() {
        len = 1;
        neg = false;
        memset(num, 0, sizeof(num));
        char c;
        for (c = getchar(); isDigit(c); c = getchar())
            num[len++] = c - '0';
        std::reverse(num, num + len);
        return c;
    }

    void print() const {
        if (neg) putchar('-');
        for (int i = len - 1; i >= 0; i--) {
            putchar('0' + num[i]);
        }
    }

    bigNum operator+(const bigNum &that) const {
        bigNum ret;
        int tmp = 0;
        for (int i = 0; i < ML; i++) {
            tmp += this->num[i] + that.num[i];
            ret.num[i] = tmp % 10;
            tmp /= 10;
            if (ret.num[i]) ret.len = i + 1;
        }
        return ret;
    }

    bool operator<(const bigNum &that) const {
        if (this->len != that.len)
            return this->len < that.len;
        for (int i = len - 1; i >= 0; i--)
            if (this->num[i] != that.num[i])
                return this->num[i] < that.num[i];
        return false;
    }

    bigNum operator-(const bigNum &that) const {
        bigNum ret;
        if ((*this) < that) {
            ret.neg = true;
            for (int i = 0; i < ML; i++) {
                ret.num[i] += that.num[i] - this->num[i];
                if (ret.num[i] < 0) {
                    ret.num[i] += 10;
                    ret.num[i + 1]--;
                }
                if (ret.num[i]) ret.len = i + 1;
            }
        } else {
            for (int i = 0; i < ML; i++) {
                ret.num[i] += this->num[i] - that.num[i];
                if (ret.num[i] < 0) {
                    ret.num[i] += 10;
                    ret.num[i + 1]--;
                }
                if (ret.num[i]) ret.len = i + 1;
            }
        }
        return ret;
    }
} a, b;

void solve() {
    char opt = a.read();
    b.read();
    if (opt == '+') {
        (a + b).print();
    }
    if (opt == '-') {
        (a - b).print();
    }
    putchar('\n');
}

int main() {
    int T;
    scanf("%d%*c", &T);
    while (T--) solve();
}
