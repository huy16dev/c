#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
void inputArray(int *arr, int *n) {
    printf("Nhap so phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", n);
    if (*n > MAX_SIZE) {
        printf("So phan tu vuot qua gioi han. Dat lai thanh %d.\n", MAX_SIZE);
        *n = MAX_SIZE;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", arr + i); 
    }
}
void printEven(int *arr, int n) {
    if (n == 0) {
        printf("Mang chua duoc nhap.\n");
        return;
    }
    printf("Cac phan tu chan trong mang:\n");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}
void printPrime(int *arr, int n) {
    if (n == 0) {
        printf("Mang chua duoc nhap.\n");
        return;
    }
    printf("Cac phan tu la so nguyen to trong mang:\n");
    for (int i = 0; i < n; i++) {
        if (isPrime(*(arr + i))) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}
void reverseArray(int *arr, int n) {
    if (n == 0) {
        printf("Mang chua duoc nhap.\n");
        return;
    }
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
    printf("Mang da duoc dao nguoc.\n");
}
void sortAscending(int *arr, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang da duoc sap xep tang dan.\n");
}
void sortDescending(int *arr, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang da duoc sap xep giam dan.\n");
}
void searchElement(int *arr, int n) {
    if (n == 0) {
        printf("Mang chua duoc nhap.\n");
        return;
    }
    int key;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == key) {
            printf("Phan tu %d duoc tim thay tai vi tri %d.\n", key, i);
            found = 1;
        }
    }
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }
}

int main() {
    int arr[MAX_SIZE];
    int n = 0; 
    int choice, subChoice;
    
    do {
        printf("\n\tMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Chon chuc nang (1-7): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                printEven(arr, n);
                break;
            case 3:
                printPrime(arr, n);
                break;
            case 4:
                reverseArray(arr, n);
                break;
            case 5:
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                    break;
                }
                printf("\nMenu con Sap xep:\n");
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                printf("Chon (1-2): ");
                scanf("%d", &subChoice);
                if (subChoice == 1) {
                    sortAscending(arr, n);
                } else if (subChoice == 2) {
                    sortDescending(arr, n);
                } else {
                    printf("Lua chon khong hop le.\n");
                }
                break;
            case 6:
                searchElement(arr, n);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);
    
    return 0;
}
