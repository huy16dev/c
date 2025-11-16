#include <stdio.h>

void printArr(int *arr, int n) {
    printf("Cac phan tu trong mang la: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int mang[] = {5, 10, 15, 20, 25};
    int n = sizeof(mang) / sizeof(mang[0]);

    printArr(mang, n);

    return 0;
}
