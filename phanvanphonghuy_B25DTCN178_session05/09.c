#include <stdio.h>

int main() {
    float he, tien;
    int n, c, luong = 160000, pc, thuong;
    while(1){
        printf("nhap he so luong: ");
        scanf("%f", &he);
        if(he >= 1 && he <= 2){
            printf("he luong: x%.1f \n", he);
            printf("\n_________\n\n");
            goto ngaycong;
        }else{
            printf("khong hop le!\n\n");
        }
    }
    
    ngaycong:
    while(1){
        printf("ngay lam viec: ");
        scanf("%d", &n);
        if(n > 0 && n <= 30){
            printf("he luong: x%.1f \n", he);
            printf("so ngay cong: %d ngay\n", n);
            printf("\n_________\n\n");
            if(n > 26){
                thuong = (n - 26)*200000;
                goto chucvu;
            }else{
                thuong = 0;
            }
            goto chucvu;
        }else{
            printf("khong hop le!\n\n");
        }
    }
    
    chucvu:
    while(1){
        printf("chuc vu:\n1.nhan vien\n2.to truong\n3.quan ly\nban la: ");
        scanf("%d", &c);
        if(c >= 1 && c <= 3){
            printf("he luong: x%.1f \n", he);
            printf("so ngay cong: %d ngay", n);
            switch(c){
                case 1:
                    pc = 500000;
                    printf("chuc vu: nhan vien");
                    printf("\n_________\n\n");
                    goto tien;
                case 2:
                    pc = 1000000;
                    printf("chuc vu: to truong");
                    printf("\n_________\n\n");
                    goto tien;
                case 3:
                    pc = 2000000;
                    printf("chuc vu: quan ly");
                    printf("\n_________\n\n");
                    goto tien;
                default:
                    continue;
                
            }
        }else{
            printf("khong hop le!\n\n");
            
        }
    }
    
    tien:
    tien = n*luong*he + pc + thuong;
    printf("luong cua ban thang nay: %dvnd \ntrong do co %d vnd tien thuong!", (int)tien, thuong);
    
    return 0;
}
