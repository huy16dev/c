#include <stdio.h>

int main() {
    int n, nd = 0;
    printf("nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);
    nd = nd * 10 + n % 10;
    n /= 10;
    nd = nd * 10 + n % 10;
    n /= 10;
    nd = nd * 10 + n % 10;
    n /= 10;
    nd = nd * 10 + n % 10;
    printf("so nghich dao la: %d\n", nd);
    return 0;
}
