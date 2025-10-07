#include <stdio.h>
#include <math.h>
 
int main(){
    int a, b, u, ucln;
    printf("nhap lan luot a va b: \n");
    scanf("%d %d", &a, &b);
    for(u = 1; u <= a || u <= b; u++){
        if(a%u == 0 && b%u ==0){
            ucln = u;
        }
        
    }
    printf("uoc chung lon nhat cua a va b la: %d", ucln);
}
