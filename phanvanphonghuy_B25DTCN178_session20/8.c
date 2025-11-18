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

    printf("=== Nhap thong tin 5 sinh vien ban dau ===\n");

    for (int i = 0; i < n; i++) {
        arr[i].id = nextId++;

        printf("\nSinh vien %d:\n", arr[i].id);

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
    }
    int pos;
    printf("\nNhap vi tri muon chen (0 den %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    struct Student newStudent;
    newStudent.id = nextId++;

    printf("\n=== Nhap thong tin sinh vien moi ===\n");

    printf("Nhap ten: ");
    fflush(stdin);
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);

    printf("Nhap so dien thoai: ");
    fflush(stdin);
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';
    arr[pos] = newStudent;
    n++;
    printf("\n=== Danh sach sinh vien sau khi chen ===\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", arr[i].id);
        printf("Ten: %s\n", arr[i].name);
        printf("Tuoi: %d\n", arr[i].age);
        printf("SDT: %s\n", arr[i].phoneNumber);
        printf("--------------------------\n");
    }

    return 0;
}
