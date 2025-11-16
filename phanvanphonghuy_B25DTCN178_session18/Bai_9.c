#include <stdio.h>

void addElement(int arr[], int *n, int value, int position) {
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    (*n)++;
}

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n;
    int pos, newValue;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }


    printf("Mang ban dau: ");
    inMang(arr, n);

    printf("\nNhap vi tri can them phan tu: ");
    scanf("%d", &pos);

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    addElement(arr, &n, newValue, pos);

    printf("Mang sau khi them phan tu: ");
    inMang(arr, n);

    return 0;
}
