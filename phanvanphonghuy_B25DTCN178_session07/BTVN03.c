#include <stdio.h>

int main(){
    int n, temp_num, reversed_num = 0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    temp_num = n;
    while (temp_num !=0){
        reversed_num = reversed_num * 10 + temp_num %10;
        temp_num /= 10;
    }
    if(reversed_num == n){
        printf("%d la so doi xung \n", n);
    }
    else{
        printf("%d khong phai la so doi xung \n", n);
    }

    return 0;
}