#include<cstdio>

int main() {
    int n, s1 = 0, s2 = 0, s3 = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        s1 += i;
    }
    int tmp = 1;
    while (tmp <= n) {
        s2 += tmp++;
    }
    tmp = 1;
    do {
        s3 += tmp++;
    } while (tmp <= n);
    if (s1 == s2 && s1 == s3) {
        printf("%d", s1);
    } else {
        printf("wrong answer");
    }
    return 0;
}