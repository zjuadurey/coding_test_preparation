#include<cstdio>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        sum += i;
        if (sum > 2000) break;
    }
    printf("%d", sum);
    return 0;
}