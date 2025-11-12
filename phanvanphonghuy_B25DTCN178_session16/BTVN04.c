#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char character;
    int count = 0;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    printf("Chuoi vua nhap la: %s\n", str);
    printf("Nhap vao 1 ki tu muon kiem tra: ");
    scanf("%c", &character);

    for(int i = 0; i < length; i++){
        if(str[i] == character){
            count++;
        }
    }
    printf("Ki tu %c xuat hien %d trong chuoi", character, count);
}