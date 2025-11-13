#include<stdio.h>
#include<string.h>
int main(){
    char str[1000],str2[1000];
    printf("Nhap chuoi 1: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Nhap chuoi thu 2: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2, "\n")] = '\0';
    strcat(str, " ");
    strcat(str, str2);
    printf("Chuoi sau khi noi:%s", str);
    return 0;
}