#include <stdio.h>

int main(){
    int arr[3] = {4, 7, 9};
    int n = sizeof(arr)/*12 bit (3 gtrix4bit)*/ / sizeof(arr[0]) /*4bit/1gtri*/;
    printf("gia tri cac phan tu:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("do dai cua mang: %d", n);
    return 0;
}
