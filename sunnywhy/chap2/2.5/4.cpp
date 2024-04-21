#include <cstdio>
const int max_n = 1e6 + 10;
int main() {
    int n, a[max_n];
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i <n; i ++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    return 0;
}