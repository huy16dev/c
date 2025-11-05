#include <stdio.h>
int main() {
    int arr[] = {3, 1, 2, 3, 4, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_count = 0;
    int most_freq = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            most_freq = arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat: %d\n", most_freq);
    printf("So lan xuat hien: %d\n", max_count);
    return 0;
}