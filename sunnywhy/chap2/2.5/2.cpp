#include<cstdio>
const int max_n = 101;

void bubble_sort(int *a, int left, int right) {
    for (int i = 1; i <= right; i ++) {
        for (int j = i; j > left; j --) {
            if (a[j - 1] > a[j]) {
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {
    int n, a[max_n];
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }

    bubble_sort(a, 0, n - 1);

    for (int i = 0; i < n; i ++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}