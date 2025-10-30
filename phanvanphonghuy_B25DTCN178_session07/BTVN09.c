#include <stdio.h>
#include <math.h>

int main() {
    int n, flag, choice;

    do {
        printf("\nNhap so nguyen duong n: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Vui long nhap so nguyen duong!\n");
        }

        flag = 0;
        printf("Cac cap (a, b) thoa man a^3 + b^3 = %d la:\n", n);

        for (int a = 0; pow(a, 3) <= n; a++) {
            for (int b = 0; pow(b, 3) <= n; b++) {
                if ((int)(pow(a, 3) + pow(b, 3)) == n) {
                    printf("(%d, %d)\n", a, b);
                    flag= 1;
                }
            }
        }

        if (!flag)
            printf("Khong co cap (a, b) nao thoa man.\n");

        printf("\nBan co muon thu so khac khong? (1 = Co, 0 = Khong): ");
        scanf("%d", &choice);

    } while (choice == 1);

}