#include <stdio.h>

int main() {
    float a, b, kq;
    char p;
    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &p);

    switch(p) {
        case '+':
            printf("kq: %.2f", a + b);
            break;
        case '-':
            printf("kq: %.2f", a - b);
            break;
        case '*':
            printf("kq: %.2f", a * b);
            break;
        case '/':
            if(b == 0)
                printf("Khong the chia cho 0");
            else {
                printf("kq: %.2f", a / b);
            }
            break;
        default:
            printf("khong hop le");
    }

    return 0;
}
