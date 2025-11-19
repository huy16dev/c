#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};


int findStudent(struct Student students[], int size, char target[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, target) == 0) {
            return i; 
        }
    }
    return -1;
}

int main() {
    struct Student students[5];
    char findName[50];

    printf("=== Nhap thong tin 5 hoc sinh ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nHoc sinh thu %d:\n", i + 1);

        printf("Nhap ten: ");
        fflush(stdin);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        printf("Nhap diem trung binh: ");
        scanf("%f", &students[i].grade);

        getchar();
    }

    printf("\nNhap ten hoc sinh muon tim: ");
    fgets(findName, sizeof(findName), stdin);
    findName[strcspn(findName, "\n")] = '\0';

    int index = findStudent(students, 5, findName);

    if (index != -1) {
        printf("\n=== Tim thay hoc sinh ===\n");
        printf("Ten: %s\n", students[index].name);
        printf("Tuoi: %d\n", students[index].age);
        printf("Diem TB: %.2f\n", students[index].grade);
    } else {
        printf("\nKhong tim thay hoc sinh ten '%s'.\n", findName);
    }

    return 0;
}


