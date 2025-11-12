#include <stdio.h>

int main() {
    char str[100];
    int letters = 0, digits = 0, special = 0;
    int i = 0;

    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n'){
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
        i++;
    }

    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", special);

    return 0;
}
