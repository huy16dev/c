#include <stdio.h>
#include <string.h>

struct Dish {
    int id;
    char name[50];
    float price;
};

void sort_desc(struct Dish arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].price < arr[j + 1].price) {
                struct Dish temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort_asc(struct Dish arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].price > arr[j + 1].price) {
                struct Dish temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort_by_name(struct Dish arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                struct Dish temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binary_search(struct Dish arr[], int n, char *key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(arr[mid].name, key);
        if (cmp == 0) return mid;
        else if (cmp < 0) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    struct Dish menu[100] = {
        {1, "Pho", 30.0},
        {2, "Bun Bo", 25.0},
        {3, "Com Tam", 20.0},
        {4, "Mi Xao", 35.0},
        {5, "Goi Cuon", 15.0}
    };
    int count = 5;
    int choice, subchoice;
    int index;
    char search_name[50];
    struct Dish new_dish;

    while (1) {
        printf("\nMENU\n");
        printf("1. In ra gia tri cac phan tu co trong menu mon an\n");
        printf("2. Them mot phan tu vao vi tri chi dinh\n");
        printf("3. Sua mot phan tu o vi tri chi dinh\n");
        printf("4. Xoa mot phan tu o vi tri chi dinh\n");
        printf("5. Sap xep cac phan tu\n");
        printf("6. Tim kiem phan tu theo name nhap vao\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Danh sach mon an:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. id: %d, name: %s, price: %.2f\n", i+1, menu[i].id, menu[i].name, menu[i].price);
                }
                break;
            case 2:
                if (count >= 100) {
                    printf("Mang da day, khong the them.\n");
                    break;
                }
                printf("Nhap vi tri (0-%d): ", count);
                scanf("%d", &index);
                if (index < 0 || index > count) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                printf("Nhap id: ");
                scanf("%d", &new_dish.id);
                printf("Nhap name: ");
                scanf("%s", new_dish.name);
                printf("Nhap price: ");
                scanf("%f", &new_dish.price);
                for (int i = count; i > index; i--) {
                    menu[i] = menu[i-1];
                }
                menu[index] = new_dish;
                count++;
                printf("Da them phan tu.\n");
                break;
            case 3:
                printf("Nhap vi tri (0-%d): ", count-1);
                scanf("%d", &index);
                if (index < 0 || index >= count) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                printf("Nhap id moi: ");
                scanf("%d", &menu[index].id);
                printf("Nhap name moi: ");
                scanf("%s", menu[index].name);
                printf("Nhap price moi: ");
                scanf("%f", &menu[index].price);
                printf("Da sua phan tu.\n");
                break;
            case 4:
                printf("Nhap vi tri (0-%d): ", count-1);
                scanf("%d", &index);
                if (index < 0 || index >= count) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                for (int i = index; i < count-1; i++) {
                    menu[i] = menu[i+1];
                }
                count--;
                printf("Da xoa phan tu.\n");
                break;
            case 5:
                printf("a. Giam dan theo price\n");
                printf("b. Tang dan theo price\n");
                printf("Nhap lua chon: ");
                scanf(" %c", &subchoice); // Note: space before %c to consume newline
                if (subchoice == 'a') {
                    sort_desc(menu, count);
                    printf("Da sap xep giam dan theo price.\n");
                } else if (subchoice == 'b') {
                    sort_asc(menu, count);
                    printf("Da sap xep tang dan theo price.\n");
                } else {
                    printf("Lua chon khong hop le.\n");
                }
                break;
            case 6:
                printf("Nhap name can tim: ");
                scanf("%s", search_name);
                printf("a. Tim kiem tuyen tinh\n");
                printf("b. Tim kiem nhi phan\n");
                printf("Nhap lua chon: ");
                scanf(" %c", &subchoice);
                if (subchoice == 'a') {
                    int found = 0;
                    for (int i = 0; i < count; i++) {
                        if (strcmp(menu[i].name, search_name) == 0) {
                            printf("Tim thay tai vi tri %d: id: %d, name: %s, price: %.2f\n", i, menu[i].id, menu[i].name, menu[i].price);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Khong tim thay.\n");
                    }
                } else if (subchoice == 'b') {
                    sort_by_name(menu, count);
                    int pos = binary_search(menu, count, search_name);
                    if (pos != -1) {
                        printf("Tim thay tai vi tri %d: id: %d, name: %s, price: %.2f\n", pos, menu[pos].id, menu[pos].name, menu[pos].price);
                    } else {
                        printf("Khong tim thay.\n");
                    }
                } else {
                    printf("Lua chon khong hop le.\n");
                }
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le.\n");
        }
    }
    return 0;
}
