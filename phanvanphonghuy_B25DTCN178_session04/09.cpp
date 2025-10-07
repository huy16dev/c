#include <stdio.h>

int main() {
    int ngay, thang, nam, hop_le = 1;
    printf("nhap ngay: ");
    scanf("%d", &ngay);
    printf("nhap thang: ");
    scanf("%d", &thang);
    printf("nhap nam: ");
    scanf("%d", &nam);

    if (thang < 1 || thang > 12)
        hop_le = 0;
    else {
        int songay;
        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
            songay = 31;
        else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
            songay = 30;
        else {
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                songay = 29;
            else
                songay = 28;
        }
        if (ngay < 1 || ngay > songay)
            hop_le = 0;
    }

    if (hop_le)
        printf("ngay thang nam hop le\n");
    else
        printf("ngay thang nam khong hop le\n");

    return 0;
}
