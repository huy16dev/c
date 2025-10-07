#include <stdio.h>

int main() {
    float c, f;
    printf("nhap nhiet do celsius: ");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("nhiet do fahrenheit = %.2f\n", f);
    return 0;
}
