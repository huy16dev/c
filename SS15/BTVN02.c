#include<stdio.h>
int caculateSum(int n){
    int sum=0;
    if(n<0){
        n=-n;
    }
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int x;
    printf("Nhap 1 so nguyen: ");
    scanf("%d",&x);
    printf("Tong cac chu so trong so %d là: %d",x,caculateSum(x));
    return 0;
}