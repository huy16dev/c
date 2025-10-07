#include <stdio.h>

int main() {
    int n, dao = 0, temp;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("So am! In ra cac chu so cua phan duong:\n");
        n = -n;
    }
    temp = n;
    while (temp > 0) {
        dao = dao * 10 + temp % 10;
        temp /= 10;
    }
    printf("Cac chu so la: ");
    while (dao > 0) {
        printf("%d ", dao % 10);
        dao /= 10;
    }
    printf("\n");
    return 0;
}
