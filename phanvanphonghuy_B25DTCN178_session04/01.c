#include <stdio.h>
int main() {
    int n;
    printf("nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n > 0)
        printf("so vua nhap la so duong\n");
    else if (n < 0)
        printf("so vua nhap la so am\n");
    else
        printf("so vua nhap la so 0\n");
    return 0;
}
