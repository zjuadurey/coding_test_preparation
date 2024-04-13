#include<cstdio>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%d\n", int(a) / int(b) );
    printf("%.2f", a / b );
    return 0;
}