#include<stdio.h>

int main(){
    int n;
    printf("nhap so n: ");
    scanf("%d", &n);
    printf("\nso ban vua nhap la %d", n);
    if(n % 2 == 0){
        printf("\nva n la so chan");
    }
    else{
        printf("\nva n la so le");
    }
    return 0;
}
