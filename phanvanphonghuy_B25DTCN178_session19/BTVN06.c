#include <stdio.h>

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int A[n], B[n];

    printf("Nhap cac phan tu cua mang A:\n ");
    for (int i = 0; i < n; i++) {
    	printf("arr[%d]:",i);
        scanf("%d", &A[i]);
    }

    copyArray(A, B, n);

    printf("Mang B sau khi sao chep: ");
    printArray(B, n);

    return 0;
}

