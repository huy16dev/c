#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student arr[50];
    int n = 5;  
    int nextId = 1;
    printf("=== Nhap thong tin 5 sinh vien ===\n");
    for (int i = 0; i < 5; i++) {
        arr[i].id = nextId++;

        printf("Nhap ten: ");
        fflush(stdin);
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &arr[i].age);

        printf("Nhap so dien thoai: ");
        fflush(stdin);
        fgets(arr[i].phoneNumber, sizeof(arr[i].phoneNumber), stdin);
        arr[i].phoneNumber[strcspn(arr[i].phoneNumber, "\n")] = '\0';

        printf("\n");
    }
    int deleteId;
    printf("Nhap id sinh vien muon xoa: ");
    scanf("%d", &deleteId);
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i].id == deleteId) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Khong tim thay sinh vien co id = %d\n", deleteId);
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("Da xoa sinh vien co id = %d\n", deleteId);
    }
    printf("\n=== Danh sach sinh vien sau khi xoa ===\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", arr[i].id);
        printf("Ten: %s\n", arr[i].name);
        printf("Tuoi: %d\n", arr[i].age);
        printf("SDT: %s\n", arr[i].phoneNumber);
        printf("-------------------------\n");
    }

    return 0;
}
