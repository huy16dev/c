#include <stdio.h>

int main(){
    int n;

    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("vui long nhap gia tri cho gtri thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("da gan gia tri cho %d phan tu \n", n);
    
    printf("cac gia tri lan luot la:\n");
    
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    
    int max = arr[0]; 
    int min = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }

    printf("\nmax la: %d", max);
    printf("\nmin la: %d\n", min);
    
    return 0;
}
