#include <stdio.h>

int main() {
    int a, tien, b1 =6000, b2 = 7000, b3 = 8500, b4 = 10000;

    printf("nuoc tieu thu: ");
    scanf("%d", &a);

    while(a < 0) {
        printf("hong hop le!\n");
        printf("nuoc tieu thu: ");
        scanf("%d", &a);
    }

    if(a <= 10) {
        tien = a * b1;
    } else if(a <= 20) {
        tien = 10 * b1 + (a - 10) * b2;
    } else if(a <= 30) {
        tien = 10 * b1 + 10 * b2 + (a - 20) * b3;
    } else {
        tien = 10 * b1 + 10 * b2 + 10 * b3 + (a - 30) * b4;
    }

    printf("Tong so tien phai tra: %d vnd", tien);

    return 0;
}
