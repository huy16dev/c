#include <stdio.h>

int main() {
    int a, b, x;
    printf("gia tri cua a la: ");
    scanf("%d", &a);
    printf("gia tri cua b la: ");
    scanf("%d", &b);
    if (a == 0) {
        if (b == 0) {
            printf("vo so nghiem\n");
        } else {
            printf("vo nghiem\n");
        }
    } else {
        x = -b/a;
        printf("nghiem la x = %d\n", x);
    }

    return 0;
}
