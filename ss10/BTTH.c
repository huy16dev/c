#include <stdio.h>

#define MAX 100  

void hienThiMang(int arr[], int n)
{
    if (n == 0)
    {
        printf("Mảng rỗng!\n");
        return;
    }
    printf("Mảng hiện tại: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n)
{
    int value, pos;
    if (*n >= MAX)
    {
        printf("Mảng đã đầy, không thể thêm!\n");
        return;
    }
    printf("Nhập giá trị cần thêm: ");
    scanf("%d", &value);
    printf("Nhập vị trí cần thêm (0 đến %d): ", *n);
    scanf("%d", &pos);

    if (pos < 0 || pos > *n)
    {
        printf("Vị trí không hợp lệ!\n");
        return;
    }

    for (int i = *n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;

    printf("Đã thêm phần tử thành công!\n");
}

void xoaPhanTu(int arr[], int *n)
{
    if (*n == 0)
    {
        printf("Mảng rỗng, không thể xóa!\n");
        return;
    }

    int pos;
    printf("Nhập vị trí cần xóa (0 đến %d): ", *n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= *n)
    {
        printf("Vị trí không hợp lệ!\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;

    printf("Đã xóa phần tử thành công!\n");
}

void capNhatGiaTri(int arr[], int n)
{
    if (n == 0)
    {
        printf("Mảng rỗng!\n");
        return;
    }

    int pos, value;
    printf("Nhập vị trí cần cập nhật (0 đến %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n)
    {
        printf("Vị trí không hợp lệ!\n");
        return;
    }

    printf("Nhập giá trị mới: ");
    scanf("%d", &value);

    arr[pos] = value;
    printf("Đã cập nhật thành công!\n");
}

void timKiemPhanTu(int arr[], int n)
{
    if (n == 0)
    {
        printf("Mảng rỗng!\n");
        return;
    }

    int value, found = 0;
    printf("Nhập giá trị cần tìm: ");
    scanf("%d", &value);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            printf("Phần tử %d được tìm thấy tại vị trí %d\n", value, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Không tìm thấy phần tử %d trong mảng.\n", value);
}

void sapXepTangDan(int arr[], int n)
{
    if (n == 0)
    {
        printf("Mảng rỗng, không thể sắp xếp!\n");
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    printf("Đã sắp xếp mảng theo thứ tự tăng dần.\n");
}

int main()
{
    int arr[MAX];
    int n = 0;
    int choice;

    do
    {
        printf("\n——————————————— Quản lý danh sách số nguyên ———————————————\n");
        printf("1. Thêm phần tử vào vị trí bất kỳ\n");
        printf("2. Xóa phần tử ở vị trí bất kỳ\n");
        printf("3. Cập nhật giá trị tại vị trí bất kỳ\n");
        printf("4. Tìm kiếm phần tử trong mảng\n");
        printf("5. Hiển thị mảng\n");
        printf("6. Sắp xếp mảng (Bubble Sort)\n");
        printf("0. Thoát chương trình\n");
        printf("----------------------------------------------------------------\n");
        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            themPhanTu(arr, &n);
            break;
        case 2:
            xoaPhanTu(arr, &n);
            break;
        case 3:
            capNhatGiaTri(arr, n);
            break;
        case 4:
            timKiemPhanTu(arr, n);
            break;
        case 5:
            hienThiMang(arr, n);
            break;
        case 6:
            sapXepTangDan(arr, n);
            break;
        case 0:
            printf("Thoát chương trình.\n");
            break;
        default:
            printf("Lựa chọn không hợp lệ! Vui lòng nhập lại.\n");
        }
    } while (choice != 0);

    return 0;
}
