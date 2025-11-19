#include<stdio.h>
#include<string.h>
struct Car{
    char model[100];
    int year;
    float price;
};
int main(){
    struct Car myCar;
    printf("Nhap ten hang xe: ");
    fgets(myCar.model,sizeof(myCar.model),stdin);
    myCar.model[strcspn(myCar.model,"\n")]='\0';
    printf("Nhap nam san xuat: ");
    scanf("%d",&myCar.year);
    getchar();
    printf("Gia xe: ");
    scanf("%f",&myCar.price);
    printf("\nHang xe:%s",myCar.model);
    printf("\nNam san xuat: %d",myCar.year);
    printf("\nGia xe: %.2f",myCar.price);
    return 0;
}