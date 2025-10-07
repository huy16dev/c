#include <stdio.h>
#include <math.h>

int main() {
    int a = 2;
    int b = 3;
    int c = 1;

    float S = (pow(a, 2) + sqrt(pow(b, 2) + 4 * a * c)) / (2 * a)
              - (pow(b, 3) / pow(c, 2)) + sqrt(fabs(a - b));

    printf("S = %.2f\n", S);

    return 0;
}
