#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Gia tri cua bien a: %d\n", a);
    printf("Dia chi cua bien a (dung &): %p\n", &a);

    printf("Gia tri cua bien a (truy cap qua con tro *p): %d\n", *p);
    printf("Dia chi cua bien a (con tro p dang tro den): %p\n", p);
    return 0;
}
