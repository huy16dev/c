#include <stdio.h>

void Print(int arrSize, int arr[]);
int main()
{
    int arr[] = { 1 , 2 , 3 };
    int arrSize = sizeof(arr) / sizeof(int);
    Print(arrSize, arr);
}

void Print(int arrSize, int arr[])
{
    printf("Cac tham so co trong mang la: ");
    for(int i = 0; i < arrSize; i++)
    {
        printf("%d ", arr[i]);
    }
}
