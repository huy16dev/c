#include <stdio.h>
#include <string.h>

#define MAX 100

struct NgaySinh {
    int ngay;
    int thang;
    int nam;
};

struct SinhVien {
    char maSV[20];
    char hoTen[50];
    struct NgaySinh ngaySinh;
    char diaChi[100];
    char dienThoai[15];
};

void nhapSinhVien(struct SinhVien *sv) {
    fflush(stdin);
    printf("Nhap ma sinh vien: ");
    fgets(sv->maSV, sizeof(sv->maSV), stdin);
    sv->maSV[strcspn(sv->maSV, "\n")] = '\0';

    printf("Nhap ho va ten: ");
    fgets(sv->hoTen, sizeof(sv->hoTen), stdin);
    sv->hoTen[strcspn(sv->hoTen, "\n")] = '\0';

    printf("Nhap ngay sinh (ngay thang nam): ");
    scanf("%d %d %d", &sv->ngaySinh.ngay, &sv->ngaySinh.thang, &sv->ngaySinh.nam);

    fflush(stdin);
    printf("Nhap dia chi: ");
    fgets(sv->diaChi, sizeof(sv->diaChi), stdin);
    sv->diaChi[strcspn(sv->diaChi, "\n")] = '\0';

    printf("Nhap dien thoai: ");
    fgets(sv->dienThoai, sizeof(sv->dienThoai), stdin);
    sv->dienThoai[strcspn(sv->dienThoai, "\n")] = '\0';
}

void hienThi(struct SinhVien ds[], int n) {
    if (n == 0) {
        printf("Danh sach rong!\n");
        return;
    }
    printf("\n--- DANH SACH SINH VIEN ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s | %s | %02d/%02d/%04d | %s | %s\n",
               i + 1,
               ds[i].maSV,
               ds[i].hoTen,
               ds[i].ngaySinh.ngay,
               ds[i].ngaySinh.thang,
               ds[i].ngaySinh.nam,
               ds[i].diaChi,
               ds[i].dienThoai);
    }
}

int timTheoMa(struct SinhVien ds[], int n, const char *maSV) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].maSV, maSV) == 0)
            return i;
    }
    return -1;
}

void xoaSinhVien(struct SinhVien ds[], int *n) {
    char ma[20];
    fflush(stdin);
    printf("Nhap ma sinh vien can xoa: ");
    fgets(ma, sizeof(ma), stdin);
    ma[strcspn(ma, "\n")] = '\0';

    int pos = timTheoMa(ds, *n, ma);
    if (pos == -1) {
        printf("Khong tim thay sinh vien!\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++)
        ds[i] = ds[i + 1];
    (*n)--;

    printf("Xoa thanh cong!\n");
}

void capNhat(struct SinhVien ds[], int n) {
    char ma[20];
    fflush(stdin);
    printf("Nhap ma sinh vien can cap nhat: ");
    fgets(ma, sizeof(ma), stdin);
    ma[strcspn(ma, "\n")] = '\0';

    int pos = timTheoMa(ds, n, ma);
    if (pos == -1) {
        printf("Khong tim thay sinh vien!\n");
        return;
    }

    printf("Nhap thong tin moi:\n");
    nhapSinhVien(&ds[pos]);
    printf("Cap nhat thanh cong!\n");
}

void sapXepTheoTen(struct SinhVien ds[], int n) {
    struct SinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ds[i].hoTen, ds[j].hoTen) > 0) {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    printf("Sap xep xong theo A-Z!\n");
}

int main() {
    struct SinhVien ds[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n===== MENU QUAN LY SINH VIEN =====\n");
        printf("1. Nhap thong tin sinh vien\n");
        printf("2. Hien thi danh sach\n");
        printf("3. Them sinh vien vao cuoi danh sach\n");
        printf("4. Xoa sinh vien theo ma sinh vien\n");
        printf("5. Cap nhat thong tin sinh vien\n");
        printf("6. Sap xep sinh vien theo ten (A-Z)\n");
        printf("7. Tim sinh vien theo ma\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            if (n < MAX) {
                printf("Nhap sinh vien thu %d:\n", n + 1);
                nhapSinhVien(&ds[n]);
                n++;
            }
            break;

        case 2:
            hienThi(ds, n);
            break;

        case 3:
            if (n < MAX) {
                printf("Them sinh vien:\n");
                nhapSinhVien(&ds[n]);
                n++;
            }
            break;

        case 4:
            xoaSinhVien(ds, &n);
            break;

        case 5:
            capNhat(ds, n);
            break;

        case 6:
            sapXepTheoTen(ds, n);
            break;

        case 7: {
            char ma[20];
            fflush(stdin);
            printf("Nhap ma sinh vien can tim: ");
            fgets(ma, sizeof(ma), stdin);
            ma[strcspn(ma, "\n")] = '\0';

            int pos = timTheoMa(ds, n, ma);
            if (pos != -1)
                printf("Tim thay: %s | %s | %02d/%02d/%04d | %s | %s\n",
                       ds[pos].maSV, ds[pos].hoTen,
                       ds[pos].ngaySinh.ngay, ds[pos].ngaySinh.thang, ds[pos].ngaySinh.nam,
                       ds[pos].diaChi, ds[pos].dienThoai);
            else
                printf("Khong tim thay!\n");
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
