#include <stdio.h>

int searchElement(int *arr, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == value) {
            return i;              
        }
    }
    return -1;
}

int main() {
    int arr[100], n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int valuePos;
    printf("Nhap gia tri muon tim: ");
    scanf("%d", &valuePos);


    int position = searchElement(arr, n, valuePos);


    if (position != -1)
        printf("Tim thay %d tai vi tri %d\n", valuePos, position);
    else
        printf("Khong tim thay %d trong mang.\n", valuePos);

    return 0;
}
