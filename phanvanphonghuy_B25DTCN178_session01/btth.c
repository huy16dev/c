#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    printf("vui long nhap so a: ");
    scanf("%d", &a);
    printf("\nvui long nhap so b: ");
    scanf("%d", &b);
    printf("\nvui long nhap so c: ");
    scanf("%d", &c);
    int max = a;
    int min = a;
    if(b > max){
        max = b;
        
    }
    if(b < min){
        min = b;
    }
    if(c > max){
        max = c;
    }
    if(c < min){
        min = c;
    }
    printf("\nso lon nhat la: %d", max);
    printf("\nso nho nhat la: %d", min);

}
