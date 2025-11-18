#include<stdio.h>
#include<string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student sv[50];
    int count = 5;

    printf("=== Nhap thong tin 5 sinh vien ===\n");

    for (int i = 0; i < count; i++) {
        sv[i].id = i + 1; 

        printf("\nSinh vien %d\n", i + 1);

        printf("Nhap ten: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &sv[i].age);
        getchar();

        printf("Nhap so dien thoai: ");
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
        sv[i].phoneNumber[strcspn(sv[i].phoneNumber, "\n")] = '\0';
        int editId,found=-1;
        for(int i=0;i<count;i++){
            if(sv[i].id==editId){
                found=i;
                break;
            }
        }
        if(found==-1){
            printf("\nKhong tim thay id sinh vien");
        }else{
            printf("\n======Sua thong tin sinh vien=======");
            printf("Sua ten: ");
            fgets(sv[found].name,sizeof(sv[found].name),stdin);
            sv[found].name[strcspn(sv[found].name,"\n")]='\0';
            printf("Sua tuoi: ");
            scanf("%d",&sv[found].age);
            getchar();
            printf("Sua Sdt moi: ");
            fgets(sv[found].phoneNumber, sizeof(sv[found].phoneNumber), stdin);
            sv[found].phoneNumber[strcspn(sv[found].phoneNumber, "\n")] = '\0';
        }
        printf("\n===== DANH SACH SINH VIEN SAU KHI SUA =====\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\n", sv[i].id);
        printf("Name: %s\n", sv[i].name);
        printf("Age: %d\n", sv[i].age);
        printf("Phone: %s\n", sv[i].phoneNumber);
    }

    return 0;
    }
}