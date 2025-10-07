#include <stdio.h>

int main() {
    char text[] =
        "-------------------------------------------------------------\n"
        "                     DANH SACH SINH VIEN                     \n"
        "-------------------------------------------------------------\n"
        "| STT | Ho va ten     | Tuoi | So dien thoai | Email                  |\n"
        "-------------------------------------------------------------\n"
        "| 1   | Nguyen Van A  | 20   | 0904488481    | anv@rikkeiacademy.com |\n"
        "| 2   | Nguyen Van B  | 21   | 0904488482    | bnv@rikkeiacademy.com |\n"
        "| 3   | Nguyen Van C  | 18   | 0904488483    | cnv@rikkeiacademy.com |\n"
        "....................."
    
        "-------------------------------------------------------------\n";

    int i = 0;
    while (text[i] != '\0') {
        putchar(text[i]);
        i++;
    }

    return 0;
}
