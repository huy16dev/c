#include<stdio.h>

int main(){
    int a,b, sum;
    printf("gia tri cua a la: ");
    scanf("%d", &a);
    printf("\ngia tri cua b la: ");
    scanf("%d", &b);
    sum = a + b;
    printf("\nsum la tong cua a cong b: %d = %d + %d", sum, a, b);
    return 0;
}
