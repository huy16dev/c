#include <stdio.h>

int main() {
    float a;
    printf("nhap thu nhap(dv trieu vnd): ");
    scanf("%f", &a);
    if(a > 10){
        printf("thue phai dong: %.2f", a*0.15);
    }else if(a > 5 && a <= 10){
        printf("thue phai dong: %.2f", a*0.10);
    }else{
        printf("thue phai dong: %.2f", a*0.05);
    }
    
    return 0;   
}
