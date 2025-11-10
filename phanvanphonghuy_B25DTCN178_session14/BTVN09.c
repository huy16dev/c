#include <stdio.h>
int main()
{
    int x = 12, y = 18;

    int ketqua = timUCLN(x, y);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ketqua);

    return 0;
}
int timUCLN(int a, int b)
{
    int ucln = 1;
    int min = (a < b) ? a : b;

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            ucln = i;
    }

    return ucln;
}


