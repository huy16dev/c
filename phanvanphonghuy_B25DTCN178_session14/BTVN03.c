#include <stdio.h>

int Calculate(int a, int b);

int main()
{
    int a, b;
    printf("Vui long nhap a,b: ");
    scanf("%d%d", &a, &b);
    int sum = Calculate(a, b);
    printf("Tong a va b la: %d", sum);

}

int Calculate(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}