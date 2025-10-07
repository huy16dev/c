#include <stdio.h>

int main() {
    int diem; 
    printf("Nhap diem cua ban: ");
    scanf("%d", &diem);

    if(diem < 0 || diem > 10){
        printf("vui long thu lai, chi nhap diem tu 0-10");
    }
    else if(diem < 4){
        printf("\nkhong dat");
    }
    else if(diem <= 6){
        printf("\ntrung binh");
    }
    else if(diem <= 8){
        printf("\ndiem kha");
    }
    else if(diem <= 9){
        printf("\ndiem gioi\n");
    }
    else {
        printf("diem gioi\n");
    }
    return 0;
}
