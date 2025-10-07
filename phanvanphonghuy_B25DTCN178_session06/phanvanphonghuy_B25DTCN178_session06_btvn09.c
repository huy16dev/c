#include <stdio.h>

int main() {
    int a, b, c;        // 3 số nguyên
    int daNhap = 0;     // Cờ kiểm tra đã nhập hay chưa
    int cn;         // Lựa chọn menu
    float tb;           // Trung bình cộng

    do {
        printf("1. Nhap 3 so nguyen\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &cn);

        switch (cn) {
            case 1:
                printf("Nhap 3 so nguyen (a, b, c): ");
                scanf("%d %d %d", &a, &b, &c);
                daNhap = 1;
                break;

            case 2:
                if (!daNhap)
                    printf("Vui long nhap 3 so truoc!\n");
                else
                    printf("Tong 3 so = %d\n", a + b + c);
                break;

            case 3:
                if (!daNhap)
                    printf("Vui long nhap 3 so truoc!\n");
                else {
                    tb = (a + b + c) / 3.0;
                    printf("Trung binh cong = %.2f\n", tb);
                }
                break;

            case 4:
                if (!daNhap)
                    printf("Vui long nhap 3 so truoc!\n");
                else {
                    int min = a;
                    if (b < min) min = b;
                    if (c < min) min = c;
                    printf("So nho nhat la: %d\n", min);
                }
                break;

            case 5:
                if (!daNhap)
                    printf("Vui long nhap 3 so truoc!\n");
                else {
                    int max = a;
                    if (b > max) max = b;
                    if (c > max) max = c;
                    printf("So lon nhat la: %d\n", max);
                }
                break;

            case 6:
                printf("Ket thuc chuong trinh. Tam biet!\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai!\n");
        }

    } while (cn != 6);

    return 0;
}
