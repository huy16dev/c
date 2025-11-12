#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    printf("Chuoi vua nhap la: %s\n", str);
    printf("Chuoi dao nguoc la: ");

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
}
