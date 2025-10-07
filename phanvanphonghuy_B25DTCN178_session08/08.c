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

    printf("ma tran vua nhap la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
