#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    char phoneNumber[15];
    char email[50];
};

void addContact(struct Contact contacts[], int *n) {
    if (*n >= MAX) {
        printf("Danh ba da day, khong the them!\n");
        return;
    }

    struct Contact c;

    printf("Nhap ten: ");
    fflush(stdin);
    fgets(c.name, sizeof(c.name), stdin);
    c.name[strcspn(c.name, "\n")] = '\0';

    printf("Nhap so dien thoai: ");
    fflush(stdin);
    fgets(c.phoneNumber, sizeof(c.phoneNumber), stdin);
    c.phoneNumber[strcspn(c.phoneNumber, "\n")] = '\0';

    printf("Nhap email: ");
    fflush(stdin);
    fgets(c.email, sizeof(c.email), stdin);
    c.email[strcspn(c.email, "\n")] = '\0';

    contacts[*n] = c;
    (*n)++;

    printf("Them lien he thanh cong!\n");
}

void displayContacts(struct Contact contacts[], int n) {
    if (n == 0) {
        printf("Danh ba rong!\n");
        return;
    }

    printf("\n--- DANH SACH LIEN HE ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. Ten: %s | SDT: %s | Email: %s\n",
               i + 1, contacts[i].name, contacts[i].phoneNumber, contacts[i].email);
    }
}

void searchByName(struct Contact contacts[], int n) {
    if (n == 0) {
        printf("Danh ba rong!\n");
        return;
    }

    char name[50];
    printf("Nhap ten can tim: ");
    fflush(stdin);
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Tim thay: Ten: %s | SDT: %s | Email: %s\n",
                   contacts[i].name, contacts[i].phoneNumber, contacts[i].email);
            found = 1;
        }
    }

    if (!found)
        printf("Khong tim thay lien he!\n");
}

void deleteByName(struct Contact contacts[], int *n) {
    if (*n == 0) {
        printf("Danh ba rong!\n");
        return;
    }

    char name[50];
    printf("Nhap ten can xoa: ");
    fflush(stdin);
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < *n; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (int j = i; j < *n - 1; j++)
                contacts[j] = contacts[j + 1];
            (*n)--;
            printf("Xoa thanh cong!\n");
            return;
        }
    }

    printf("Khong tim thay ten can xoa!\n");
}

int main() {
    struct Contact contacts[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n===== MENU QUAN LY DANH BA =====\n");
        printf("1. Them lien he\n");
        printf("2. Hien thi tat ca lien he\n");
        printf("3. Tim kiem theo ten\n");
        printf("4. Xoa lien he theo ten\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addContact(contacts, &n);
            break;

        case 2:
            displayContacts(contacts, n);
            break;

        case 3:
            searchByName(contacts, n);
            break;

        case 4:
            deleteByName(contacts, &n);
            break;

        case 5:
            printf("Thoat chuong trinh...\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 5);

    return 0;
}
