#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;  
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) { //a voi b = 0
                printf("vo so nghiem\n");
            } else { //ca 3 = 0
                printf("vo nghiem\n");
            }
        } else { //b khac 0
            double x = -c / b;
            printf("pt bac nhat co nghiem x = %lf\n", x);
        }
    }
    else { //a khac 0
        double d = (b * b) - (4 * a * c);

        if (d < 0) {
            printf("vo nghiem\n");
        }
        else if (d == 0) {
            double x = -b / (2 * a);
            printf("nghiem kep x = %lf\n", x);
        }
        else { // d se lon hon 0
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            printf("pt co 2 nghiem phan biet:\n");
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf\n", x2);
        }
    }

    return 0;
}
