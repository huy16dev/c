#include <stdio.h>
#include <string.h>

struct Book {
    char id[20];
    char title[50];
    char author[50];
    float price;
    char category[50];
};

void inputBooks(struct Book books[], int *n) {
    printf("Nhap so luong sach: ");
    scanf("%d", n);
    getchar(); 

    for (int i = 0; i < *n; i++) {
        printf("\n--- Nhap sach thu %d ---\n", i + 1);

        printf("Ma sach: ");
        fgets(books[i].id, 20, stdin);
        books[i].id[strcspn(books[i].id, "\n")] = '\0';

        printf("Ten sach: ");
        fgets(books[i].title, 50, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';

        printf("Tac gia: ");
        fgets(books[i].author, 50, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Gia tien: ");
        scanf("%f", &books[i].price);
        getchar();

        printf("The loai: ");
        fgets(books[i].category, 50, stdin);
        books[i].category[strcspn(books[i].category, "\n")] = '\0';
    }
}

void displayBooks(struct Book books[], int n) {
    printf("\n=== DANH SACH SACH ===\n");
    for (int i = 0; i < n; i++) {
        printf("\nSach %d:\n", i + 1);
        printf("Ma sach: %s\n", books[i].id);
        printf("Ten sach: %s\n", books[i].title);
        printf("Tac gia: %s\n", books[i].author);
        printf("Gia: %.2f\n", books[i].price);
        printf("The loai: %s\n", books[i].category);
    }
}

void addBookAt(struct Book books[], int *n) {
    int pos;
    printf("Nhap vi tri can chen (0-%d): ", *n);
    scanf("%d", &pos);
    getchar();

    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    struct Book newBook;
    printf("Nhap ma sach: "); fgets(newBook.id, 20, stdin);
    newBook.id[strcspn(newBook.id, "\n")] = '\0';

    printf("Nhap ten sach: "); fgets(newBook.title, 50, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0';

    printf("Nhap tac gia: "); fgets(newBook.author, 50, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0';

    printf("Nhap gia: "); scanf("%f", &newBook.price); getchar();

    printf("Nhap the loai: "); fgets(newBook.category, 50, stdin);
    newBook.category[strcspn(newBook.category, "\n")] = '\0';

    for (int i = *n; i > pos; i--) {
        books[i] = books[i - 1];
    }
    books[pos] = newBook;
    (*n)++;
}

void deleteBookById(struct Book books[], int *n) {
    char id[20];
    getchar();
    printf("Nhap ma sach can xoa: ");
    fgets(id, 20, stdin);
    id[strcspn(id, "\n")] = '\0';

    int found = -1;
    for (int i = 0; i < *n; i++) {
        if (strcmp(books[i].id, id) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Khong tim thay sach de xoa!\n");
        return;
    }

    for (int i = found; i < *n - 1; i++) {
        books[i] = books[i + 1];
    }
    (*n)--;

    printf("Da xoa sach thanh cong!\n");
}

void updateBookById(struct Book books[], int n) {
    char id[20];
    getchar();
    printf("Nhap ma sach can cap nhat: ");
    fgets(id, 20, stdin);
    id[strcspn(id, "\n")] = '\0';

    int found = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].id, id) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Khong tim thay sach!\n");
        return;
    }

    printf("Nhap ten sach moi: ");
    fgets(books[found].title, 50, stdin);
    books[found].title[strcspn(books[found].title, "\n")] = '\0';

    printf("Nhap tac gia moi: ");
    fgets(books[found].author, 50, stdin);
    books[found].author[strcspn(books[found].author, "\n")] = '\0';

    printf("Nhap gia moi: ");
    scanf("%f", &books[found].price);
    getchar();

    printf("Nhap the loai moi: ");
    fgets(books[found].category, 50, stdin);
    books[found].category[strcspn(books[found].category, "\n")] = '\0';

    printf("Cap nhat thanh cong!\n");
}

void sortBooks(struct Book books[], int n, int type) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((type == 1 && books[i].price > books[j].price) ||
                (type == 2 && books[i].price < books[j].price)) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void searchBookByTitle(struct Book books[], int n) {
    char name[50];
    getchar();
    printf("Nhap ten sach can tim: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';

    int found = 0;
    printf("\n=== Ket qua tim kiem ===\n");
    for (int i = 0; i < n; i++) {
        if (strstr(books[i].title, name)) {
            printf("Ma sach: %s\n", books[i].id);
            printf("Ten sach: %s\n", books[i].title);
            printf("Tac gia: %s\n", books[i].author);
            printf("Gia: %.2f\n", books[i].price);
            printf("The loai: %s\n\n", books[i].category);
            found = 1;
        }
    }

    if (!found)
        printf("Khong tim thay sach!\n");
}

int main() {
    struct Book books[100];
    int n = 0;
    int choice;

    do {
        printf("\n======= MENU =======\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Cap nhat thong tin theo ma sach\n");
        printf("6. Sap xep sach theo gia (1: tang, 2: giam)\n");
        printf("7. Tim sach theo ten\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputBooks(books, &n); break;
            case 2: displayBooks(books, n); break;
            case 3: addBookAt(books, &n); break;
            case 4: deleteBookById(books, &n); break;
            case 5: updateBookById(books, n); break;
            case 6: {
                int type;
                printf("Chon kieu sap xep (1: tang, 2: giam): ");
                scanf("%d", &type);
                sortBooks(books, n, type);
                break;
            }
            case 7: searchBookByTitle(books, n); break;
            case 8: printf("Thoat chuong trinh!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);

    return 0;
}
