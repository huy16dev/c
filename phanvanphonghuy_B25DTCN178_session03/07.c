#include <stdio.h>

int main() {
    int n, s = 0;
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);
    s += n % 10;
    n /= 10;
    s += n % 10;
    n /= 10;
    s += n % 10;
    n /= 10;
    s += n % 10;
    printf("S = %d\n", s);
    return 0;
}
