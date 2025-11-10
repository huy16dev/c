#include <stdio.h>

int isHoanHao(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);

    if (isHoanHao(a))
        printf("%d la so hoan hao.\n", a);
    else
        printf("%d khong phai la so hoan hao.\n", a);

    if (isHoanHao(b))
        printf("%d la so hoan hao.\n", b);
    else
        printf("%d khong phai la so hoan hao.\n", b);

    return 0;
}
