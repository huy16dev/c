#include <stdio.h>

int main(){
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int reversed_num = 0, temp = n;
    while(temp > 0){
        reversed_num = reversed_num * 10 + temp % 10;
        temp /= 10;
    }
    
    printf("So dao nguoc cua %d la: %d", n, reversed_num);

}