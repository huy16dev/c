#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student sv[50];
    int count = 5;

    printf("=== Nhap thong tin 5 sinh vien ===\n\n");

    for (int i = 0; i < count; i++) {
        sv[i].id = i + 1;  

        printf("Sinh vien %d\n", i + 1);

        printf("Nhap ten: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &sv[i].age);
        getchar();

        printf("Nhap so dien thoai: ");
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
        sv[i].phoneNumber[strcspn(sv[i].phoneNumber, "\n")] = '\0';

        printf("\n");
    }
    printf("=== Nhap thong tin sinh vien moi can them ===\n");

    struct Student newSV;
    newSV.id = count + 1; 

    printf("Nhap ten: ");
    fgets(newSV.name, sizeof(newSV.name), stdin);
    newSV.name[strcspn(newSV.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &newSV.age);
    getchar();

    printf("Nhap so dien thoai: ");
    fgets(newSV.phoneNumber, sizeof(newSV.phoneNumber), stdin);
    newSV.phoneNumber[strcspn(newSV.phoneNumber, "\n")] = '\0';
    sv[count] = newSV;
    count++;
    printf("\n===== DANH SACH SINH VIEN SAU KHI THEM =====\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\n", sv[i].id);
        printf("Name: %s\n", sv[i].name);
        printf("Age: %d\n", sv[i].age);
        printf("Phone: %s\n", sv[i].phoneNumber);
    }

    return 0;
}
