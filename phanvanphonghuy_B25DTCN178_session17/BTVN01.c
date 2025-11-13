#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str,sizeof(str),stdin);

    int len = strlen(str);
    int laPalindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            laPalindrome = 0;
            break;
        }
    }

    if (laPalindrome)
        printf("La palindrome");
    else
        printf("Khong phai palindrome");

    return 0;
}
