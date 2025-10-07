#include <stdio.h>

int main() {
    int a[100];
    int n = 0, ch;

    do {
        printf("\n1.them\n2.xoa\n3.sua\n4.tim\n5.hien\n6.sapxep\n7.thoat\nchon: ");
        scanf("%d", &ch);

        if (ch == 1) {
            int vt, gt;
            printf("vi tri: ");
            scanf("%d", &vt);
            if (vt < 0 || vt > n) continue;
            printf("gia tri: ");
            scanf("%d", &gt);
            for (int i = n; i > vt; i--) a[i] = a[i - 1];
            a[vt] = gt;
            n++;
        } 
        else if (ch == 2) {
            if (n == 0) continue;
            int vt;
            printf("vi tri: ");
            scanf("%d", &vt);
            if (vt < 0 || vt >= n) continue;
            for (int i = vt; i < n - 1; i++) a[i] = a[i + 1];
            n--;
        } 
        else if (ch == 3) {
            if (n == 0) continue;
            int vt, gt;
            printf("vi tri: ");
            scanf("%d", &vt);
            if (vt < 0 || vt >= n) continue;
            printf("gia tri moi: ");
            scanf("%d", &gt);
            a[vt] = gt;
        } 
        else if (ch == 4) {
            if (n == 0) continue;
            int gt, f = 0;
            printf("gia tri: ");
            scanf("%d", &gt);
            for (int i = 0; i < n; i++) {
                if (a[i] == gt) {
                    printf("thay tai %d\n", i);
                    f = 1;
                }
            }
            if (!f) printf("khong thay\n");
        } 
        else if (ch == 5) {
            for (int i = 0; i < n; i++) printf("%d ", a[i]);
            printf("\n");
        } 
        else if (ch == 6) {
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (a[j] > a[j + 1]) {
                        int t = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = t;
                    }
                }
            }
        }

    } while (ch != 7);

    return 0;
}
