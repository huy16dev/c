#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arrSize, i, findValue;

    printf("Vui lòng nhập số phần tử của mảng: ");
    scanf("%d", &arrSize);
    
    int Arr[arrSize];
    for(int i = 0; i < arrSize; i++)
    {
        printf("Vui lòng nhập phần tử [%d]: ", i);
        scanf("%d", &Arr[i]);
    }

    printf("Vui lòng nhập giá trị cần tìm: ");
    scanf("%d", &findValue);

    bool isFound = false;
    int leftValue = 0;
    int rightValue = arrSize - 1;
    int midValue, midIndex;
    while (leftValue <= midValue)
    {
        midIndex = (leftValue + rightValue) / 2;
        midValue = Arr[midIndex];
        if(midValue == findValue)
        {
            printf("Phần tử %d được tìm thấy tại chỉ số: %d\n", findValue, midIndex);
            isFound = true;
            break;
        }
        else if (midValue < findValue)
        {
            leftValue = midIndex + 1; // tìm bên phải
        }
        else
        {
            rightValue = midIndex - 1; // tìm bên trái
        }
    }
    
     if (!isFound)
        printf("Không tìm thấy phần tử trong mảng.\n");
}