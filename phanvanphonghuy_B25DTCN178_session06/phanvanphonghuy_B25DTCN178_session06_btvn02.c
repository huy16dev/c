#include <stdio.h>
#include <math.h>
 
int main(){
    int a;
    printf("vui lòng nhập số nguyên của bạn: \n");
    scanf("%d", &a);
    while(a!=10){
        printf("sai rồi vui lòng nhập lại: \n");
        scanf("%d", &a);    
    }
    printf("bạn đã đoán đúng");
    
    return 0;
}
