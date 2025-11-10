#include <stdio.h>

void printMaxvalue(int arrSize, int arr[]);
int main()
{
    int arr[] = { 1 , 2 , 3 };
    int arrSize = sizeof(arr) / sizeof(int);
    printMaxvalue(arrSize, arr);
}

void printMaxvalue(int arrSize, int arr[])
{
    int maxValue = 0;
    printf("Gia tri lon nhat co trong mang la: ");
    for(int i = 0; i < arrSize; i++)
    {
        if(maxValue < arr[i])
        {
            maxValue = arr[i];
        }
    }
    printf("%d", maxValue);
}
