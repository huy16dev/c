#include <stdio.h>

int main() {
    int so = 12345;
    int tong = 0;

    tong += so % 10;
    so /= 10;
    tong += so % 10;
    so /= 10;
    tong += so % 10;
    so /= 10;
    tong += so % 10;
    so /= 10;
    tong += so % 10;

    printf("tong cac chu so = %d\n", tong);

    return 0;
}
