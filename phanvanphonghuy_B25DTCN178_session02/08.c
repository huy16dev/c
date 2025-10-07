#include <stdio.h>

int main() {
    int so = 12345;
    int kq = 0;

    kq = kq * 10 + so % 10;
    so /= 10;
    kq = kq * 10 + so % 10;
    so /= 10;
    kq = kq * 10 + so % 10;
    so /= 10;
    kq = kq * 10 + so % 10;
    so /= 10;
    kq = kq * 10 + so % 10;

    printf("so dao nguoc = %d\n", kq);

    return 0;
}
