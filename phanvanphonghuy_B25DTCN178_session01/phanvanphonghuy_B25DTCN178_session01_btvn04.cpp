#include<stdio.h>

int main(){
    int diem;
    printf("nhap diem cua ban: ");
    scanf("%d", &diem);
    //em làm thừa yêu cầu sợ bị điểm thấp quá:(( giá trị int âm dương lớn bé lắm mà ạ...
    if(diem > 10 || diem < 0){
        printf("\nvui long nhap diem tu 0-10");
        printf("\nnhap lai diem cua ban: ");
        scanf("%d", &diem);
        if(diem > 10 || diem < 0){
            printf("\nban nhap sai qua nhieu lan, vui long thu lai sau");
        }
    }
    
    if(diem >= 5 && diem <= 10){
        printf("\ndiem cua ban la: %d", diem);
        printf("\nva diem cua ban da dat");
    }
    else if(diem >= 0 && diem < 5){
        printf("\ndiem cua ban la: %d", diem);
        printf("\nva diem cua ban khong dat");
    }
    return 0;
}
