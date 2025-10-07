#include <stdio.h>
#include <math.h>
 
int main(){
    int a, sum, n;
    
    for (n = 1; n <=9; n++){
        for(a = 1; a<= 10; a++){
            sum = a*n;
            printf("%d x %d = %d \n", n, a, sum);
        }
    }
}
