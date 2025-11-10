#include <stdio.h>

int giaiThua(int n);

int main()
{
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    int result = giaiThua(n);
    printf("Giai thua cua %d la: %d\n", n, result);

    return 0;
}

int giaiThua(int n)
{
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt = gt * i;
    }
    return gt;
}
