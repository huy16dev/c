#include <stdio.h>

int main() {
    float day, cao, dt;
    printf("nhap do dai canh day: ");
    scanf("%f", &day);
    printf("nhap chieu cao: ");
    scanf("%f", &cao);
    dt = 0.5 * day * cao;
    printf("dien tich tam giac = %.2f\n", dt);
    return 0;
}
