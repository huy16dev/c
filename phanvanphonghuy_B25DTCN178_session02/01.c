#include <stdio.h>

int main() {
    short a = 10; //so nguyen nho, 2 byte
    int b = 20; //so nguyen thong dung, 4 byte
    long c = 30; //so nguyen lon hon int, 4 hoac 8 byte
    long long d = 40; //so nguyen rat lon, 8 byte
    unsigned short e = 50; //so nguyen duong nho, 2 byte
    unsigned int f = 60; //so nguyen duong, 4 byte
    unsigned long g = 70; //so nguyen duong lon, 4 hoac 8 byte
    unsigned long long h = 80; //so nguyen duong rat lon, 8 byte
    char i = 'a'; // char: ky tu don, 1 byte

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
