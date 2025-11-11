#include <stdio.h>

int findLeastFrequent(int arr[], int size) {
    int minCount = size + 1; 
    int result = arr[0]; 

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count < minCount) {
            minCount = count;
            result = arr[i];
        }
    }

    return result;
}

int main() {
    int arr[100], n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int least = findLeastFrequent(arr, n);
    printf("Phan tu xuat hien it nhat la: %d\n", least);

    return 0;
}
