#include <stdio.h>

int main() {
    int hang, cot;
    printf("nhap so hang: ");
    scanf("%d", &hang);
    printf("nhap so cot: ");
    scanf("%d", &cot);

    int arr[hang][cot];

    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("cac phan tu tren duong bien la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
