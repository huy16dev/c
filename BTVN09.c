#include <stdio.h>
int main() {
    int arr[] = {5, 2, 3, 2, 4, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            unique[count++] = arr[i];
        }
    }
    printf("Mang sau khi loai bo trung lap: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}