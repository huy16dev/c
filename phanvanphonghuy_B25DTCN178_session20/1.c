#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];
    int age;
    char phonenumber[11];
};
int main(){
    struct Student sinhvien;
    strcpy(sinhvien.name,"Hoang Trieu Gia Bach");
    sinhvien.age=18;
    strcpy(sinhvien.phonenumber,"0915315786");
    printf("======Thong tin sinh vien========\n");
    printf("\nName: %s",sinhvien.name);
    printf("\nAge: %d",sinhvien.age);
    printf("\nPhone: %s",sinhvien.phonenumber);
    return 0;
}
