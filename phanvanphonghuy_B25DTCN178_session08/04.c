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
    
    return 0;
}
