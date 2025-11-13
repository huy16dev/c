#include <stdio.h>
#include <string.h>

int main() {
    char A[1000], B[1000];
    printf("Nhap chuoi A: ");
    fgets(A, sizeof(A), stdin);
    if (A[strlen(A) - 1] == '\n') {
        A[strlen(A) - 1] = '\0';
    }
    printf("Nhap chuoi B: ");
    fgets(B, sizeof(B), stdin);
    if (B[strlen(B) - 1] == '\n') {
        B[strlen(B) - 1] = '\0';
    }
    if (strstr(A, B) != NULL) {
        printf("Có\n");
    } else {
        printf("Không\n");
    }
    
    return 0;
}
