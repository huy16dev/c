#include <stdio.h>
int removeDuplicates(int arr[], int size) {
    int newSize = size;

    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--;
            } else {
                j++; 
            }
        }
    }

    return newSize;
}

int main() {
    int arr[100];
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int newSize = removeDuplicates(arr, n);

    printf("Mang sau khi loai bo trung lap:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nKich thuoc moi cua mang: %d\n", newSize);

    return 0;
}
