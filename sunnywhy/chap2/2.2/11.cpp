#include<cstdio>

int main() {
    int year, month, day, hour, minute, second;
    scanf("%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);
    printf("%d\n%02d\n%02d\n%02d\n%02d\n%02d", year, month, day, hour, minute, second);
    return 0;
}