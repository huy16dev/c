#include<stdio.h>

int main(){
    int a,b;
    printf("gia tri cua a la: ");
    scanf("%d", &a);
    printf("\ngia tri cua b la: ");
    scanf("%d", &b);
    if(a < b){
        printf("so be la: %d", a);
    }
    else{
        printf("so lon la: %d", b);
    }
    return 0;
}
