#include <stdio.h>
#include <string.h>
int main() {
    char *arr[] = {"chuoi1 ", "chuoi2", "chuoi3", "chuoi4", "chuoi5"};
    int n = sizeof(arr) / sizeof(arr[0]);
    char input[100];
    int found = 0;
    printf("Nhap chuoi can tim: ");
    scanf("%s", input);
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i], input) == 0) {
            printf("Chuoi '%s' duoc tim thay tai vi tri %d.\n", input, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay chuoi '%s' trong mang.\n", input);
    }
    return 0;
}