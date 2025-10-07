#include <stdio.h>
#iclude <math.h>

int main() {
    int arr[5] = {3, 5, 6, 8, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] += 2;
        }
    }

    printf("\n\nsau khi thay doi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
