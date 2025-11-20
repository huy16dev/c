#include <stdio.h>
#include <string.h>

#define MAX 100

struct Ngay {
    int ngay;
    int thang;
    int nam;
};

struct DonHang {
    char maDH[20];
    char tenKH[50];
    struct Ngay ngayDat;
    float tongTien;
    char trangThai[20]; 
};

void nhapDonHang(struct DonHang *dh) {
    fflush(stdin);
    printf("Nhap ma don hang: ");
    fgets(dh->maDH, sizeof(dh->maDH), stdin);
    dh->maDH[strcspn(dh->maDH, "\n")] = '\0';

    printf("Nhap ten khach hang: ");
    fgets(dh->tenKH, sizeof(dh->tenKH), stdin);
    dh->tenKH[strcspn(dh->tenKH, "\n")] = '\0';

    printf("Nhap ngay dat (ngay thang nam): ");
    scanf("%d %d %d", &dh->ngayDat.ngay, &dh->ngayDat.thang, &dh->ngayDat.nam);

    printf("Nhap tong tien: ");
    scanf("%f", &dh->tongTien);

    fflush(stdin);
    printf("Nhap trang thai (Dang xu ly / Da giao / Huy): ");
    fgets(dh->trangThai, sizeof(dh->trangThai), stdin);
    dh->trangThai[strcspn(dh->trangThai, "\n")] = '\0';
}

void hienThi(struct DonHang ds[], int n) {
    if (n == 0) {
        printf("Danh sach don hang rong!\n");
        return;
    }

    printf("\n--- DANH SACH DON HANG ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. MaDH: %s | KH: %s | Ngay: %02d/%02d/%04d | Tong tien: %.2f | Trang thai: %s\n",
               i + 1,
               ds[i].maDH,
               ds[i].tenKH,
               ds[i].ngayDat.ngay, ds[i].ngayDat.thang, ds[i].ngayDat.nam,
               ds[i].tongTien,
               ds[i].trangThai);
    }
}

int timTheoMa(struct DonHang ds[], int n, const char *ma) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].maDH, ma) == 0)
            return i;
    }
    return -1;
}

void capNhatTrangThai(struct DonHang ds[], int n) {
    char ma[20];
    fflush(stdin);
    printf("Nhap ma don hang can cap nhat: ");
    fgets(ma, sizeof(ma), stdin);
    ma[strcspn(ma, "\n")] = '\0';

    int pos = timTheoMa(ds, n, ma);
    if (pos == -1) {
        printf("Khong tim thay don hang!\n");
        return;
    }

    printf("Nhap trang thai moi (Dang xu ly / Da giao / Huy): ");
    fgets(ds[pos].trangThai, sizeof(ds[pos].trangThai), stdin);
    ds[pos].trangThai[strcspn(ds[pos].trangThai, "\n")] = '\0';

    printf("Cap nhat thanh cong!\n");
}

void xoaDonHang(struct DonHang ds[], int *n) {
    char ma[20];
    fflush(stdin);
    printf("Nhap ma don hang can xoa: ");
    fgets(ma, sizeof(ma), stdin);
    ma[strcspn(ma, "\n")] = '\0';

    int pos = timTheoMa(ds, *n, ma);
    if (pos == -1) {
        printf("Khong tim thay don hang!\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++)
        ds[i] = ds[i + 1];

    (*n)--;
    printf("Xoa thanh cong!\n");
}

void sapXepTang(struct DonHang ds[], int n) {
    struct DonHang temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].tongTien > ds[j].tongTien) {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    printf("Sap xep tang dan thanh cong!\n");
}

void sapXepGiam(struct DonHang ds[], int n) {
    struct DonHang temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].tongTien < ds[j].tongTien) {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    printf("Sap xep giam dan thanh cong!\n");
}

int main() {
    struct DonHang ds[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n===== MENU QUAN LY DON HANG =====\n");
        printf("1. Nhap don hang moi\n");
        printf("2. Hien thi danh sach don hang\n");
        printf("3. Cap nhat trang thai don hang\n");
        printf("4. Xoa don hang theo ma\n");
        printf("5. Sap xep theo tong tien (tang dan)\n");
        printf("6. Sap xep theo tong tien (giam dan)\n");
        printf("7. Tim kiem don hang theo ma\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            if (n < MAX) {
                printf("Nhap don hang thu %d:\n", n + 1);
                nhapDonHang(&ds[n]);
                n++;
            }
            break;

        case 2:
            hienThi(ds, n);
            break;

        case 3:
            capNhatTrangThai(ds, n);
            break;

        case 4:
            xoaDonHang(ds, &n);
            break;

        case 5:
            sapXepTang(ds, n);
            break;

        case 6:
            sapXepGiam(ds, n);
            break;

        case 7: {
            char ma[20];
            fflush(stdin);
            printf("Nhap ma don hang can tim: ");
            fgets(ma, sizeof(ma), stdin);
            ma[strcspn(ma, "\n")] = '\0';

            int pos = timTheoMa(ds, n, ma);
            if (pos != -1)
                printf("Tim thay: %s | %s | %02d/%02d/%04d | %.2f | %s\n",
                       ds[pos].maDH, ds[pos].tenKH,
                       ds[pos].ngayDat.ngay, ds[pos].ngayDat.thang, ds[pos].ngayDat.nam,
                       ds[pos].tongTien,
                       ds[pos].trangThai);
            else
                printf("Khong tim thay don hang!\n");
            break;
        }

        case 8:
            printf("Thoat chuong trinh...\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 8);

    return 0;
}
