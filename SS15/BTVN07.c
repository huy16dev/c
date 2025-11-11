#include <stdio.h>

int binarySearch(int a[], int n, int x) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == x) {
            return mid; 
        } 
        else if (a[mid] < x) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int n, a[100], x;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang (da duoc sap xep tang dan):\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int kq = binarySearch(a, n, x);

    if (kq != -1)
        printf("Tim thay %d tai vi tri chi so: %d\n", x, kq);
    else
        printf("Khong tim thay %d trong mang.\n", x);

    return 0;
}
