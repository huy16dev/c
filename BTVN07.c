#include <stdio.h>
int main() {
    int arr[] = {100, 90, 80, 110, 120};
    int n = sizeof(arr) / sizeof(arr[0]);
    int buy_price = arr[0];
    int min_loss = -1;
    int loss_month = -1;
    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 thang.\n");
        return 1;
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] < buy_price) {
            int loss = buy_price - arr[i];
            if (min_loss == -1 || loss < min_loss) {
                min_loss = loss;
                loss_month = i + 1;
            }
        }
    }
    if (min_loss == -1) {
        printf("Ban co the ban co lai.\n");
    } else {
        printf("Ban se lo it nhat %d neu ban vao thang %d.\n", min_loss, loss_month);
    }
    return 0;
}