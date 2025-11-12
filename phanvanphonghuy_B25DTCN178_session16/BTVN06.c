#include <stdio.h>
#include <string.h>

int main() {
    int i, count = 0;
    char str[100];
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    printf("Chuoi hien tai la: %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", count);
}
