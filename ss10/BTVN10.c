#include <stdio.h>

int main()
{
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhập phần tử [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nSố nhỏ nhất trong mảng là: %d\n", min);

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Mảng sau khi sắp xếp tăng dần: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int findValue;
    printf("\nNhập số nguyên cần tìm: ");
    scanf("%d", &findValue);

    int left = 0, right = n - 1;
    int found = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == findValue)
        {
            printf("Tìm thấy %d tại chỉ số: %d\n", findValue, mid);
            found = 1;
            break;
        }
        else if (arr[mid] < findValue)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (!found)
    {
        printf("Không tìm thấy phần tử %d trong mảng.\n", findValue);
    }

    return 0;
}
