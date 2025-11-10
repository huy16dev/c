#include <stdio.h>

#define MAX 100

void nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    int pos, value;
    printf("Nhap vi tri can chen: "); scanf("%d", &pos);
    printf("Nhap gia tri can chen: "); scanf("%d", &value);
    if (pos < 0 || pos > *n || *n >= MAX) return;
    for (int i = *n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = value; (*n)++;
}

void suaPhanTu(int arr[], int n) {
    int pos, value;
    printf("Nhap vi tri can sua: "); scanf("%d", &pos);
    if (pos < 0 || pos >= n) return;
    printf("Nhap gia tri moi: "); scanf("%d", &value);
    arr[pos] = value;
}

void xoaPhanTu(int arr[], int *n) {
    int pos;
    printf("Nhap vi tri can xoa: "); scanf("%d", &pos);
    if (pos < 0 || pos >= *n) return;
    for (int i = pos; i < *n - 1; i++) arr[i] = arr[i + 1];
    (*n)--;
}

void sapXepTang(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
            }
}

void sapXepGiam(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1]) {
                int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
            }
}

int timTuyenTinh(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x) return i;
    return -1;
}

int timNhiPhan(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[MAX], n = 0, choice;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Sap xep\n");
        printf("7. Tim kiem\n");
        printf("8. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: nhapMang(arr, &n); break;
        case 2: inMang(arr, n); break;
        case 3: themPhanTu(arr, &n); break;
        case 4: suaPhanTu(arr, n); break;
        case 5: xoaPhanTu(arr, &n); break;
        case 6: {
            char c;
            printf("a. Giam dan\nb. Tang dan\nChon: ");
            scanf(" %c", &c);
            if (c == 'a') sapXepGiam(arr, n);
            else if (c == 'b') sapXepTang(arr, n);
            break;
        }
        case 7: {
            char c; int x;
            printf("Nhap so can tim: "); scanf("%d", &x);
            printf("a. Tuyen tinh\nb. Nhi phan\nChon: ");
            scanf(" %c", &c);
            int pos = (c == 'a') ? timTuyenTinh(arr, n, x) : timNhiPhan(arr, n, x);
            if (pos != -1) printf("Tim thay tai vi tri %d\n", pos);
            else printf("Khong tim thay\n");
            break;
        }
        }
    } while (choice != 8);
    return 0;
}
