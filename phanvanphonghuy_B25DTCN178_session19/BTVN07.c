#include <stdio.h>
#include <stdlib.h>

int* nhapMang(int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    int *arr = (int*) malloc((*n) * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        exit(1);
    }

    printf("Nhap tung phan tu:\n");
    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }

    return arr;
}

void hienThi(int *arr, int n) {
    if (arr == NULL) {
        printf("Mang chua duoc khoi tao!\n");
        return;
    }

    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int doDai(int n) {
    return n;
}

int tongMang(int *arr, int n) {
    if (arr == NULL) return 0;

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i);
    return sum;
}

int maxMang(int *arr, int n) {
    if (arr == NULL) return 0;

    int max = *arr;
    for (int i = 1; i < n; i++)
        if (*(arr + i) > max)
            max = *(arr + i);

    return max;
}

int main() {
    int *arr = NULL;
    int n = 0;
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                arr = nhapMang(&n);
                break;
            case 2:
                hienThi(arr, n);
                break;
            case 3:
                printf("Do dai mang: %d\n", doDai(n));
                break;
            case 4:
                printf("Tong cac phan tu = %d\n", tongMang(arr, n));
                break;
            case 5:
                printf("Phan tu lon nhat = %d\n", maxMang(arr, n));
                break;
            case 6:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 6);

    if (arr != NULL)
        free(arr);

    return 0;
}

