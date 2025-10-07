#include <stdio.h>

int main() {
    int cu, moi, sodien;
    float tien;

    printf("nhap chi so cu: ");
    scanf("%d", &cu);
    printf("nhap chi so moi: ");
    scanf("%d", &moi);

    sodien = moi - cu;

    if (sodien < 0)
        printf("chi so khong hop le\n");
    else if (sodien < 50)
        tien = sodien * 10000;
    else if (sodien < 100)
        tien = sodien * 15000;
    else if (sodien < 150)
        tien = sodien * 20000;
    else if (sodien < 200)
        tien = sodien * 25000;
    else
        tien = sodien * 30000;

    if (sodien >= 0)
        printf("so dien tieu thu: %d kWh\nso tien phai tra: %.0f VND\n", sodien, tien);

    return 0;
}
