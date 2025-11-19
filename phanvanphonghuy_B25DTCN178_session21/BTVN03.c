#include<stdio.h>
#include<string.h>
struct Address{
    char street[50];
    char city[50];
    int zip;
};
struct Person{
    char name[50];
    int age;
    struct Address adr;
};
int main(){
    struct Person person1;
    printf("Nhap ten nguoi dung: ");
    fgets(person1.name,sizeof(person1.name),stdin);
    person1.name[strcspn(person1.name,"\n")]='\0';
    printf("Nhap tuoi: ");
    scanf("%d",&person1.age);
    getchar();
    printf("Nhap pho: ");
    fgets(person1.adr.street,sizeof(person1.adr.street),stdin);
    person1.adr.street[strcspn(person1.adr.street,"\n")]='\0';
    printf("Nhap thanh pho: ");
    fgets(person1.adr.city,sizeof(person1.adr.city),stdin);
    person1.adr.city[strcspn(person1.adr.city,"\n")]='\0';
    printf("Nhap ma zip: ");
    scanf("%d",&person1.adr.zip);
    fflush(stdin);
    printf("\nTen: %s",person1.name);
    printf("\nTuoi: %d",person1.age);
    printf("\nPho: %s",person1.adr.street);
    printf("\nThanh pho: %s",person1.adr.city);
    printf("\nZipcode: %d",person1.adr.zip);
    return 0;
}