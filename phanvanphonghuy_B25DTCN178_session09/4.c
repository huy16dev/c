#include <stdio.h>

int main(){
    int n;
    printf("nhap so n (so o: n*n): ");
    scanf("%d", &n);
    int arr[n][n];
    //gan value
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("gan gia tri cho arr[%d][%d] :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    //in bang ma tran nxn
    printf("bang gia tri vua nhap: \n");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    
    //vong lap tim max
    int i = 0, j =0,x, y;
    int max = arr[0][0];
    for(; i<n; i++){
        for(; j<n; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                x = i;
                y =j;
            }
        }
    }
    printf("so lon nhat trong bang la: arr[%d][%d] = %d", x, y, max);
    
}
