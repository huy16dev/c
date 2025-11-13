#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char word[100], longest[100];
    int i = 0, j = 0, maxLen = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0; 
            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }

        i++;
    }

    printf("Tu dai nhat: \"%s\"\n", longest);
    printf("Do dai: %d\n", maxLen);

    return 0;
}
