#include <stdio.h>

void deleteElement(int arr[], int *n, int position) {
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[100];

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMang ban dau: ");
    printArr(arr, n);

    int pos;
    printf("\nNhap vi tri can xoa: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    deleteElement(arr, &n, pos);

    printf("\nMang sau khi xoa: ");
    printArr(arr, n);

    return 0;
}
