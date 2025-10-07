#include <stdio.h>

int main() {
    int a, gv =20000;

    printf("nhap tuoi: ");
    scanf("%d", &a);
    if(a > 0 && a <= 120){
        if(a < 6){
            printf("tien ve: 0 VND");
        }else if(a >= 6 && a <= 18){
            printf("tien ve: %d", gv/2);
        }else if(a > 18 && a <= 60){
            printf("tien ve: %d", gv);
        }else{
            printf("tien ve: %d", gv*7/10);
        }        
    }else{
        printf("tuoi khong hop le");
    }
    
    return 0;   
}
