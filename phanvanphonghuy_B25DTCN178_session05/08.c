#include <stdio.h>

int main() {
    int a, b1 = 6000, b2 = 7000, b3 = 8500, b4 = 10000;
  
    while(1){
        printf("nhap so met khoi tieu thu(m^3): ");
        scanf("%d", &a);
        if(a < 0){
           printf("vui long nhap so dien hop ! \n"); 
        }
        else if(a <= 10){
            printf("tong tien: %dx%d = %d vnd", a, b1, a*b1);
            break;
        }else if(a <= 20){
            printf("tong tien: %dx%d + %dx%d = %d + %d = %d vnd", 10, b1, (a - 10), b2, 10*b1, (a-10)*b2, 10*b1 + (a-10)*b2);
            break;
        }else if(a <= 30){
            printf("tong tien: %dx%d + %dx%d + %dx%d = %d + %d + %d = %d vnd", 10, b1, 10, b2, a-20, b3, 10*b1, 10*b2, (a-20)*b3, 10*b1 + 10*b2 + (a-20)*b3);
            break;
        }else{
            printf("tong tien: %dx%d + %dx%d + %dx%d + %dx%d = %d + %d + %d +%d = %d vnd", 10, b1, 10, b2, 10, b3, (a - 30), b4, 10*b1, 10*b2, 10*b3, (a-30)*b4, 10*b1 + 10*b2 + 10*b3 + (a-30)*b4);
            break;
        }

    }

    return 0;   
}
