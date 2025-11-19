#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct Product products[5];
    float totalValue = 0;

    for (int i = 0; i < 5; i++) {
        printf("\nNhap thong tin san pham thu %d:\n", i + 1);
        getchar();

        printf("Nhap ten san pham: ");
        fgets(products[i].name, sizeof(products[i].name), stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0';

        printf("Nhap gia san pham: ");
        scanf("%f", &products[i].price);

        printf("Nhap so luong san pham: ");
        scanf("%d", &products[i].quantity);
        totalValue += products[i].price * products[i].quantity;
    }

    printf("\n=====================================\n");
    printf("Tong gia tri tat ca san pham: %.2f\n", totalValue);
    printf("=====================================\n");

    return 0;
}
