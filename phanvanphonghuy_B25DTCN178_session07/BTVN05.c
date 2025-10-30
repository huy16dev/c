#include <stdio.h>
#include <math.h>

int main(){
    int n, original_num, sum = 0, digits = 0, temp;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    original_num = n;
    temp = n;
    while(temp > 0){
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp > 0){
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if(sum == original_num){
        printf("%d la so Armstrong \n", n);
    }
    else{
        printf("%d khong phai la so Armstrong \n", n);
    }

}