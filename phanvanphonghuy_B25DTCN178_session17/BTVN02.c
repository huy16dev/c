#include<stdio.h>
#include<string.h>
#include<ctype.h>
void printCaps(char str[]){
    for(int i=0;i<strlen(str);i++){
        str[i]=toupper(str[i]);
    }
}
void printNor(char str[]){
    for(int i=0;i<strlen(str);i++){
        str[i]=tolower(str[i]);
    }
}
int main(){
    char str[1000],n;
    int choice;
    printf("Nhap chuoi: ");
    fgets(str,sizeof(str),stdin);
    char caps[1000],nor[1000];
    strcpy(caps,str);
    strcpy(nor,str);
    do{
        printf("=======Menu========");
        printf("\n1.Toan bo ky tu chuyen thanh chu hoa");
        printf("\n2.Toàn bo ky tu chuyen thanh chu thuong");
        printf("\n3.Thoat");
        printf("\nLua chon cua ban: ");
        scanf("%d",&choice);
            switch(choice){
                case 1:
                    printCaps(caps);
                    printf("Chuyen ki tu thanh chu hoa: %s",caps);
                    break;
                case 2:
                    printNor(nor);
                    printf("Chuyen ki tu thanh chu thuong: %s",nor);
                    break;
                case 3:
                    printf("Ket thuc chuong trinh");
                    break;
                default:
                    printf("Lua chon khong hop le");  
            }     
    }while(choice!=3);
    return 0;
}