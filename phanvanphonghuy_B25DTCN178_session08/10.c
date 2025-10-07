#include <stdio.h>

int main() {
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("cac so nguyen to trong mang la:\n");
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if (x < 2) continue;
        int nt = 1;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                nt = 0;
                break;
            }
        }
        if (nt) printf("%d ", x);
    }

    return 0;
}
