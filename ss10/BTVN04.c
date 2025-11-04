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

    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize - i - 1; j++)
        {
            int predicingNumer = Arr[j + 1];
            int index = Arr[j];
            if (index > predicingNumer)
            {
                int temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
   
    printf("Mảng sau khi sắp xếp là: ");
    for(int i = 0; i < arrSize; i ++)
    {
        printf("%d ", Arr[i]);
    }
}