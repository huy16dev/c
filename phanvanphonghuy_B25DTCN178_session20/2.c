#include<stdio.h>
struct Student{
    char name[50];
    int age;
    int phonenumber[11];
};
int main(){
    struct Student sinhvien;
    printf("Ten sv la: ");
    fgets(sinhvien.name,sizeof(sinhvien.name),stdin);
    sinhvien.name[strcspn(sinhvien.name, "\n")]='\0';
    printf("Tuoi: ");
    scanf("%d",&sinhvien.age);
    printf("Sdt: ");
    getchar();
    scanf("%d",&sinhvien.phonenumber);
    sinhvien.phonenumber[strcspn(sinhvien.phonenumber, "\n")] = '\0';
}