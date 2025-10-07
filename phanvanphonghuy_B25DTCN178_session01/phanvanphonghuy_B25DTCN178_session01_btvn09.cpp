#include<stdio.h>
#include<math.h>

int main(){
    int n, d1, d2, d3, reverse;
    printf("gan 3 so nguyen cho n\n");
    scanf("%d", &n);
    if(n < 100 || n > 999){
        printf("n la:%d \n", n);
        d1 = (n % 10);
        d2 = ((n / 10) % 10);
        d3 = (n / 100);
        reverse = (d1*100 + d2*10 + d3);
        printf("so da dao nguoc la: %d", reverse);
    }
    else if(n > -100 || n < -999){
        printf("n la:%d \n", n);
        d1 = (n % 10);
        d2 = ((n / 10) % 10);
        d3 = (n / 100);
        reverse = (d1*100 + d2*10 + d3);
        printf("so da dao nguoc la: %d", reverse);
    }
    else{
        printf("hay nhap so co 3 chu so, vui long thu lai sau");
    }
    return 0;
}
