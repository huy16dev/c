#include <stdio.h>

int main() {
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 != 0) break;
            printf("so vua nhap khong phai so le, vui long nhap lai.\n");
        }
    }

    printf("cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
