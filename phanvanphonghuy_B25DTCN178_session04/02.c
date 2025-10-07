#include <stdio.h>

int main() {
    int n;
    printf("nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("so vua nhap la so chan\n");
    else
        printf("so vua nhap la so le\n");
    return 0;
}
