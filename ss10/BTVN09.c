#include <stdio.h>

int main()
{
    int n;
    printf("Nhập số lượng sản phẩm: ");
    scanf("%d", &n);

    int price[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhập giá sản phẩm [%d]: ", i);
        scanf("%d", &price[i]);
    }

    int id;
    printf("Nhập mã sản phẩm (index cần tìm): ");
    scanf("%d", &id);

    if (id >= 0 && id < n)
    {
        printf("Giá sản phẩm có mã %d là: %d\n", id, price[id]);
    }
    else
    {
        printf("Không tìm thấy sản phẩm có mã %d\n", id);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (price[j] > price[j + 1])
            {
                int temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    printf("\nDanh sách giá sản phẩm sau khi sắp xếp tăng dần:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", price[i]);
    }

    printf("\n");
    return 0;
}
