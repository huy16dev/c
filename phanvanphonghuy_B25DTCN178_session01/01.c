#include <stdio.h>

int main() {
    int a, b;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    if(a > b){
        printf("so lon hon la: %d", a);
    }else if(a < b){
        printf("so lon hon la: %d", b);
    }else{
        printf("2 so bang nhau");
    }
    
    return 0;
}
