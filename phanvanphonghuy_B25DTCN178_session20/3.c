#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int age;
    int phoneNumber[11];
};
int main(){
    struct Student student[5];
    for(int i=0;i<5;i++){
        printf("\nNhap thong tin sinh vien thu %d: ",i+1);
        printf("\nNhap ten: ");
        fgets(student[i].name,sizeof(student[i].name),stdin);
        student[i].name[strcspn(student[i].name,"\n")]='\0';
        printf("Nhap tuoi: ");
        scanf("%d",&student[i].age);
        getchar();
        printf("Nhap sdt: ");
        scanf("%d",&student[i].phoneNumber);
        getchar();
    }
    printf("\n======Danh sach sinh vien========\n");
    for(int i=0;i<5;i++){
        printf("Sinh vien %d: \n",i+1);
        printf("Ten: %s\n",student[i].name);
        printf("Tuoi: %d\n",student[i].age);
        printf("Ten: %d\n",student[i].phoneNumber);
    }
    return 0;
}
