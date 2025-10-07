#include <stdio.h>

int main() {
    float toan, van, anh, tong, tb;
    printf("nhap diem toan, van, anh: ");
    scanf("%f %f %f", &toan, &van, &anh);
    tong = toan + van + anh;
    tb = tong / 3;
    printf("tong = %.2f\n", tong);
    printf("trung binh = %.2f\n", tb);
    return 0;
}
