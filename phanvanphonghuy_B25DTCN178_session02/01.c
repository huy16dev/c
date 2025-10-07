#include <stdio.h>

int main() {
    // Kieu du lieu nguyen co dau, kich thuoc nho (2 byte)
    short a = 10; // short: so nguyen nho, pham vi tu -32,768 den 32,767

    // Kieu so nguyen thong thuong (4 byte)
    int b = 100; // int: so nguyen, duoc su dung pho bien nhat

    // Kieu so nguyen lon hon int (thuong 4 hoac 8 byte tuy he thong)
    long c = 1000; // long: so nguyen lon hon int

    // Kieu so nguyen rat lon (8 byte)
    long long d = 1000000; // long long: so nguyen rat lon dung cho gia tri lon

    // Kieu so nguyen khong dau, kich thuoc nho (2 byte)
    unsigned short e = 65000; // unsigned short: so nguyen duong nho (0 den 65535)

    // Kieu so nguyen khong dau (4 byte)
    unsigned int f = 4000000000; // unsigned int: chi luu gia tri duong (0 den ~4 ty)

    // Kieu so nguyen khong dau lon hon int (4 hoac 8 byte)
    unsigned long g = 5000000000; // unsigned long: so nguyen duong lon

    // Kieu so nguyen khong dau rat lon (8 byte)
    unsigned long long h = 10000000000; // unsigned long long: so nguyen duong rat lon

    // Kieu du lieu ky tu (1 byte)
    char i = 'A'; // char: ky tu don, luu ma ASCII (vi du 'A' = 65)

    // In ra gia tri cac bien
    printf("Gia tri cac bien:\n");
    printf("short a = %d\n", a);
    printf("int b = %d\n", b);
    printf("long c = %ld\n", c);
    printf("long long d = %lld\n", d);
    printf("unsigned short e = %hu\n", e);
    printf("unsigned int f = %u\n", f);
    printf("unsigned long g = %lu\n", g);
    printf("unsigned long long h = %llu\n", h);
    printf("char i = %c\n", i);
    return 0;
}
