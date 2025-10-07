#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    float S;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(a * a + b * b));
    printf("S = %.2f\n", S);
    return 0;
}
