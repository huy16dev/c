#include<stdio.h>
int caculateMinus(int number1,int number2){
    int minus=number1-number2;
    return minus;
}
int caculateMulti(int number1,int number2){
    int multi=number1*number2;
    return multi;
}
int main(){
    int a,b;
    printf("Nhap so a: ");
    scanf("%d",&a);
    printf("Nhap so b: ");
    scanf("%d",&b);
    printf("Hieu cua hai so la:%d",caculateMinus(a,b));
    printf("\nTich cua hai so la:%d",caculateMulti(a,b));
}