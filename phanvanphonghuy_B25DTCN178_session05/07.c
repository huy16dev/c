#include <stdio.h>

int main() {
    char c;
    while(1) {
        printf("Nhap ky tu: ");
        scanf(" %c", &c);
        if(c >= 'a' && c <= 'z'){
            printf("chu hoa: %c\n", c - 32);
            break;
        }else if(c >= 'A' && c <= 'Z'){
            printf("chu thuong: %c\n", c + 32);
            break;
        }
        else{
            printf("Khong phai chu cai.\n");
        }
    }
    return 0;
}
