#include <stdio.h>

int main(){
    
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("vui long nhap 5 gia tri: \n");
    for(int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("gia tri thu %d la: %d \n",i + 1, arr[i]);
    }
    return 0;
}
