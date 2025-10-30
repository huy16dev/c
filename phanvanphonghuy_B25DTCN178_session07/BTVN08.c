
#include<stdio.h>

int main(){
    int n;
    int x;
    int y;
    int count = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("Nhap 1 chu so muon kiem tra: ");
    scanf("%d", &x);
    y = n;
    if(x<0){
        printf("Chu so khong hop le");
    }
    while(n>0){
        int cs=n%10;
        if(cs==x){
            count++;
        }
        n=n/10;
    }
    printf("Chu so %d xuat hien %d lan trong so %d",x,count,y);

    return 0;
}