#include <stdio.h>

int main() {
    int thang;
    printf("nhap thang: ");
    scanf("%d", &thang);

    if (thang < 1 || thang > 12)
        printf("thang khong hop le\n");
    else if (thang == 2)
        printf("thang 2 co 28 hoac 29 ngay\n");
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        printf("thang %d co 30 ngay\n", thang);
    else
        printf("thang %d co 31 ngay\n", thang);

    return 0;
}
