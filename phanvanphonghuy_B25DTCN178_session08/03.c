#include <stdio.h>

int main(){
    int arr[5] = {3, 5, 6, 8, 3};
    int so_so_chan = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("gia tri thu %d: %d la so chan\n", i+1, arr[i]);
            so_so_chan += 1;
        }

    }
    if(so_so_chan==0){
        printf("mang khong chua so chan");
    }


    
    return 0;
}
