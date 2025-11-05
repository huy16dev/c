#include <stdio.h>
#include <limits.h>
int main() {
    int arr[] = {12, 18, 7, 89, 36, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 phan tu.\n");
        return 1;
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    if (max2 == INT_MIN) {
        printf("Loi: Khong co phan tu lon thu hai trong mang.\n");
    } else {
        printf("Phan tu lon nhat: %d\n", max1);
        printf("Phan tu lon thu hai: %d\n", max2);
    }
    return 0;
}