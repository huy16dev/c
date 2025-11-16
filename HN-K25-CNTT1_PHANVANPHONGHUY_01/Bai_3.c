#include <stdio.h>

void sum(int *x, int *y, int *result) {
    *result = *x + *y;
}

int main() {
    int a = 7, b = 12;
    int output = 0;
    sum(&a, &b, &output);

    printf("Tong cua %d và %d là: %d\n", a, b, output);
    return 0;
}
