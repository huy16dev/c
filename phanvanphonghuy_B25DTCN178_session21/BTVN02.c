#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];
    int age;
    float grade;
};
int main(){
    struct Student student1;
    printf("Nhap ten hocsinh: ");
    fgets(student1.name,sizeof(student1.name),stdin);
    student1.name[strcspn(student1.name,"\n")]='\0';
    printf("Nhap tuoi hoc sinh: ");
    scanf("%d",&student1.age);
    getchar();
    printf("Diem trung binh: ");
    scanf("%f",&student1.grade);
    printf("\nTen hoc sinh:%s",student1.name);
    printf("\nTuoi hoc sinh: %d",student1.age);
    printf("\nDiem trung binh hoc sinh la: %.2f",student1.grade);
    return 0;
}