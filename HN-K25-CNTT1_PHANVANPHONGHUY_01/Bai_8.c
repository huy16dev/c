#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];

    printf("Nhap mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    int length = strlen(inputString);

    char *ptrInput = inputString;

    char *ptrReverse = reverseString;

    for (int i = 0; i < length; i++) {
        *(ptrReverse + i) = *(ptrInput + (length - 1 - i));
    }

    *(ptrReverse + length) = '\0';

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}
