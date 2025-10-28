#include <stdio.h>

int main(){
    int n, value = 1;
    printf("nhap so o hang ngang hoac doc: ");
    scanf("%d", &n);
    int arr[n][n];

    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            arr[y][x] = value++;
        }
    }
    
    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            printf("%d  ", arr[y][x]);
        }
        printf("\n");
    }
    
}
