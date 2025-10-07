#include <stdio.h>

int main() {
    int namsinh, tuoi;
    float dtb;
    printf("nhap nam sinh: ");
    scanf("%d", &namsinh);
    printf("nhap diem trung binh: ");
    scanf("%f", &dtb);

    if (namsinh <= 1900 || namsinh > 2025)
        printf("nam sinh khong hop le\n");
    else {
        tuoi = 2025 - namsinh;
        printf("thong tin sinh vien:\n\n");
        printf("nam sinh: %d\n", namsinh);
        printf("tuoi: %d\n", tuoi);

        if (dtb < 5.0)
            printf("hoc luc: yeu\n");
        else if (dtb < 6.5)
            printf("hoc luc: trung binh\n");
        else if (dtb < 8.0)
            printf("hoc luc: kha\n");
        else
            printf("hoc luc: gioi\n");
    }

    return 0;
}
