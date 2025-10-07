#include <stdio.h>
#include <math.h>

int main() {
    int a = 2;
    int b = 3;
    int c = 1;

    float A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);

    printf("A = %.2f\n", A);

    return 0;
}
