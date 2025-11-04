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

    for(int i = 0; i < arrSize; i++)
    {
        if(Arr[i] == findValue)
        {
            printf("Chỉ số của phần tử trong mảng là: %d", i);
            isMatched = true;
            break;
        }
    }

    if(!isMatched)
    {
        printf("Không tìm thấy chỉ số của phần tử trong mảng");
    }
}