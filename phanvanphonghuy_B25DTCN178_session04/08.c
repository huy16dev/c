#include <stdio.h>

int main() {
    int a, b, c;
    printf("nhap 3 canh tam giac: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("la 3 canh tam giac\n");
    else
        printf("khong phai 3 canh tam giac\n");

    return 0;
}
