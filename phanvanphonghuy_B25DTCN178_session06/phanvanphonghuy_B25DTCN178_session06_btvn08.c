#include <stdio.h>
#include <math.h>
 
int main(){
    int a, b, boi, bcnn;
    printf("nhap lan luot a va b: \n");
    scanf("%d %d", &a, &b);
    for(boi = a*b ; boi >= a && boi >= b; boi--){
        if( boi%a==0 &&  boi%b==0 ){
            bcnn = boi;
        }
        
    }
    printf("bcnn a va b la: %d", bcnn);
}
