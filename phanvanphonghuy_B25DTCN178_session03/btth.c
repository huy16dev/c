#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    float S;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    S = sqrt(a * a + b * b) / (a + b) + (sqrt(a) + sqrt(b)) / (a * b);
    printf("S = %.2f\n", S);
    return 0;
}
