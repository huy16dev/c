#include<stdio.h>
#include<string.h>
char printNor(char c){
    if (c>='A'&&c<='Z')
        return c+32;
    return c;
}
int main(){
    char str1[1000],str2[1000];
    int same=1;
    printf("Nhap chuoi thu nhat: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Nhap chuoi thu hai: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    if(strlen(str1)!=strlen(str2)){
        printf("\nKhac nhau");
        return 0;
    }
    for(int i=0;i<strlen(str1);i++){
        if(printNor(str1[i])!=printNor(str2[i])){
            same=0;
            break;
        }
    }
    if(same){
        printf("Giong nhau\n");
    }else{
        printf("Khac nhau\n");
    }
    return 0;   
}