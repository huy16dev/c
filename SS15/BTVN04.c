#include<stdio.h>
void nhapMang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Nhap a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void inMang(int a[],int n){
    printf("Cac phan tu trong mang la: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int caculateSum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int x,a[100];
    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&x);
    nhapMang(a,x);
    inMang(a,x);
    printf("\nTong cac phan tu trong mang la:%d",caculateSum(a,x));
    return 0;
}