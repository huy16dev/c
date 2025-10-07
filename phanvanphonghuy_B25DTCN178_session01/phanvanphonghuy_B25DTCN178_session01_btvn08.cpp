#include <stdio.h>
#include <math.h>

int main() {
    int number1, number2;
    char op;
    printf("nhap so thu nhat: ");
    scanf("%d",&number1);
    printf("\nnhap so thu hai: ");
    scanf("%d", &number2);
    printf("\nchon phep tinh('+','-','*', '/'): ");
    scanf("%s", &op);
    if(op == '+' || op == '-' || op == '*' || op == '/'){
        if(op == '+'){
            int tong = number1 + number2;
            printf("%d + %d = %d", number1, number2, tong);
        }
        else if(op == '-'){
            int hieu = number1 - number2;
            printf("%d - %d = %d", number1, number2, hieu);
        }
        else if(op == '*'){
            int tich = number1 * number2;
            printf("%d * %d = %d", number1, number2, tich);
        }
        else if(op == '/'){
            int thuong = number1 / number2;
            printf("%d / %d = %d", number1, number2, thuong);
        }
    }
    else{
        printf("chon sai phep tinh, vui long chon lai");
    }
    return 0;

}
