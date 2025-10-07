#include <stdio.h>

int main() {
    float a;
    printf("nhap diem tb: ");
    scanf("%f", &a);
    if(a >= 0 && a <= 10){
        if(a >= 8){
            printf("gioi");
        }else if(a >= 6.5){
            printf("kha");
        }else if(a >= 5){
            printf("tb");
        }else{
            printf("yeu");
        }
    }else{
        printf("1-10");
    }
    
    return 0;   
}
