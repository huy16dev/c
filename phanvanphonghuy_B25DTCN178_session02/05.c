#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    float c = 2.5;

    float tong_float = a + b + c;
    int tong_int = a + b + (int)c;

    printf("tong float = %.2f\n", tong_float);
    printf("tong int = %d\n", tong_int);

    return 0;
}
