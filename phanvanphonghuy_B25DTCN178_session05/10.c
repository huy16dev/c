#include <stdio.h>

int main() {
    int kw, loai;
    float tien, phuphi;
    
    while(1){
        printf("nhap so dien tieu thu (kWh): ");
        scanf("%d", &kw);
        if(kw < 0){
            printf("so dien khong hop le! vui long nhap lai.\n\n");
        }else{
            goto loaikh;
        }
    }

    loaikh:
    while(1){
        printf("loai ho tieu dung:\n1. ho gia dinh\n2. ho kinh doanh\n3. ho san xuat\nban la: ");
        scanf("%d", &loai);
        if(loai >= 1 && loai <= 3){
            printf("so dien tieu thu: %d kWh\n", kw);
            printf("loai ho tieu dung: ");
            switch(loai){
                case 1:
                    printf("ho gia dinh\n");
                    goto tinh;
                case 2:
                    printf("ho kinh doanh\n");
                    goto tinh;
                case 3:
                    printf("ho san xuat\n");
                    goto tinh;
                default:
                    continue;
            }
        }else{
            printf("khong hop le! vui long nhap lai.\n\n");
        }
    }

    tinh:
    if(kw <= 50){
        tien = kw * 1500;
    }else if(kw <= 100){
        tien = 50 * 1500 + (kw - 50) * 2000;
    }else if(kw <= 200){
        tien = 50 * 1500 + 50 * 2000 + (kw - 100) * 2500;
    }else{
        tien = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kw - 200) * 3000;
    }
  
    if(loai == 1){
        phuphi = tien * 0.05;
    }else if(loai == 2){
        phuphi = tien * 0.10;
    }else{
        phuphi = tien * 0.08;
    }
  
    tien = tien + phuphi;
    printf("\n_________\n\n");
    printf("tong tien dien phai tra: %.3f vnd\n", tien);
    printf("(bao gom phu phi %.3f vnd)", phuphi);

    return 0;
}
