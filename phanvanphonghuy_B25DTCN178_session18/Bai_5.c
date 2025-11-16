#include <stdio.h>

void updateElement(int *arr, int newValue, int position) {
    arr[position] = newValue;
}

void printArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int pos, newValue;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    printArr(arr, n);

    printf("\nNhap vi tri can cap nhat: ");
    scanf("%d", &pos);

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    updateElement(arr, newValue, pos);

    printf("Mang sau khi cap nhat: ");
    printArr(arr, n);

    return 0;
}
