#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isMatched;
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

    int exitsCount = 0;
    for(int i = 0; i < arrSize; i++)
    {
        if(Arr[i] == findValue)
        {
            exitsCount++;
            isMatched = true;
        }
    }

    if(!isMatched)
    {
        printf("Không tìm thấy chỉ số của phần tử trong mảng");
    }
    printf("Số lần giá trị xuất hiện trong mảng: %d", exitsCount);
}