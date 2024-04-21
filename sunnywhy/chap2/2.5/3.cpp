#include <cstdio>
const int max_len = 11;
int main() {
    int n, m, a[max_len][max_len];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            printf("%d", a[i][j]);
            if (j < m - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
    return 0;
}