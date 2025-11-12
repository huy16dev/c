#include <stdio.h>
#include <string.h>

int main() {
    int i, count = 0;
    int inWord = 0;
    char str[100];
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    
    printf("Chuoi hien tai la: %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && inWord == 0) {
            inWord = 1;
            count++;
        }
        else if (str[i] == ' ') {
            inWord = 0;
        }
    }

    printf("So tu trong chuoi la: %d\n", count);
}
