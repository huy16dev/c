#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    char name[50];
    int age;
    int phoneNumber[11];
};
int main(){
    struct Student sv[50];
    int count=5;
    for (int i = 0; i < count; i++) {
        printf("\n=== Nhap thong tin sinh vien thu %d ===\n", i + 1);
        sv[i].id = i + 1;
        printf("Nhap ten: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &sv[i].age);
        getchar();

        printf("Nhap so dien thoai: ");
        scanf("%d",&sv[i].phoneNumber);
        getchar();
    }

    printf("\n===== DANH SACH 5 SINH VIEN =====\n");
    for (int i = 0; i < count; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Name: %s\n", sv[i].name);
        printf("Age: %d\n", sv[i].age);
        printf("Phone: %s\n", sv[i].phoneNumber);
    }

    return 0;
}