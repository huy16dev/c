#include <stdio.h>

int main() {
    int n;
    float A;
    printf("nhap n (>1): ");
    scanf("%d", &n);
    A = 1.0 / ((n - 1) * n) + 1.0 / (n * (n + 1)) + 1.0 / ((n + 1) * (n + 2));
    printf("A = %.5f\n", A);
    return 0;
}
