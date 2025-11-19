#include<stdio.h>
#include<string.h>
struct Book{
    char title[100];
    char author[100];
    float price;
};
int main(){
    struct Book books[3];
    for(int i=0;i<3;i++){
        printf("\nNhap thong tin sach thu %d\n",i+1);
        printf("\nNhap ten sach: ");
        fgets(books[i].title,sizeof(books[i].title),stdin);
        books[i].title[strcspn(books[i].title,"\n")]='\0';
        fflush(stdin);
        printf("Nhap ten tac gia: ");
        fgets(books[i].author,sizeof(books[i].author),stdin);
        books[i].author[strcspn(books[i].author,"\n")]='\0';
        fflush(stdin);
        printf("Nhap gia tien: ");
        scanf("%f",&books[i].price);
        getchar();
    }
    for(int i=0;i<3;i++){
        printf("Ten sach: %s || Ten tac gia: %s || Gia ca: %.2f",books[i].title,books[i].author,books[i].price);
    }
    return 0;
}