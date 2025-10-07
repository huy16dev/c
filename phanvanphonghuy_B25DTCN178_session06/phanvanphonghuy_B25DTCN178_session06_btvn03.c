#include <stdio.h>
#include <math.h>
 
int main(){
    int a, sum, n;
    sum = 0;
    printf("nhap so N: ");
    scanf("%d", &n);
    for(a = 1; a<=n ; a++ ){
        sum += a; //rut gon cua sum = sum + a
    }
    printf("tổng từ 1 tới N là: %d", sum);
    return 0;
}
