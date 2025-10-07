#include <stdio.h>
#include <math.h>
 
int main(){
    int a, sum, n;
    printf("vui long nhap so N: ");
    scanf("%d", &n);
    while(n > 10 || n < 1){
        printf("vui long nhap lai so tu 1-10: \n");
        scanf("%d", &n);
    }
    
    for ( a = 1; a <=10; a++){
        sum = a *n;
        printf("%d x %d = %d \n", n, a, sum);
    }
}
