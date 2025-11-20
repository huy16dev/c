#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    char name[50];
    int age;
    float grade;
};

void inputStudent(struct Student *s) {
    printf("Nhap ten: ");
    fflush(stdin);
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &s->age);

    printf("Nhap diem: ");
    scanf("%f", &s->grade);
}

void displayStudents(struct Student arr[], int n) {
    if (n == 0) {
        printf("Chua co hoc sinh nao!\n");
        return;
    }

    printf("\n--- DANH SACH HOC SINH ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. Ten: %s | Tuoi: %d | Diem: %.2f\n",
               i + 1, arr[i].name, arr[i].age, arr[i].grade);
    }
}

void averageGrade(struct Student arr[], int n) {
    if (n == 0) {
        printf("Khong co du lieu de tinh diem trung binh!\n");
        return;
    }
    float sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i].grade;
    printf("Diem trung binh cua tat ca hoc sinh: %.2f\n", sum / n);
}

int main() {
    struct Student students[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap thong tin hoc sinh\n");
        printf("2. Hien thi thong tin hoc sinh\n");
        printf("3. Tinh diem trung binh\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            if (n < MAX) {
                printf("\n--- Nhap hoc sinh thu %d ---\n", n + 1);
                inputStudent(&students[n]);
                n++;
            } else {
                printf("Danh sach da day!\n");
            }
            break;

        case 2:
            displayStudents(students, n);
            break;

        case 3:
            averageGrade(students, n);
            break;

        case 4:
            printf("Thoat chuong trinh...\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 4);

    return 0;
}
