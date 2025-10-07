#include <stdio.h>
#include <math.h>

int main() {
    float r, cv, dt;
    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    cv = 2 * M_PI * r;
    dt = M_PI * r * r;
    printf("chu vi = %.2f\n", cv);
    printf("dien tich = %.2f\n", dt);
    return 0;
}
