#include <stdio.h>

int main() {
    float a, b;
    printf("nhap a: ");
    scanf("%f", &a);
    printf("nhap b: ");
    scanf("%f", &b);
    if(a == 0 && b == 0){
        printf("pt co vo so nghiem");
    }else if(a == 0  && b != 0){
        printf("pt vo nghiem");
    }else{
        printf("pt co nghiem duy nhat: x = %.2f", ((-b)/a));
    }
    return 0;
}
