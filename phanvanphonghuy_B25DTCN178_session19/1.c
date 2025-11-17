#include<stdio.h>
int findMax(int *a,int n){
    int max=*(a+0);
    for(int i=0;i<n;i++){
        if(*(a+i)>max){
            max=*(a+i);
        }
    }
    return max;
}
int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    int max=findMax(a,n);
    printf("So lon nhat trong mang la: %d",max);
    return 0;
}
