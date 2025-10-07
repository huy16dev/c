#include <stdio.h>
#include <math.h>
 
int main(){
    int a, b, phep;
    printf("vui long nhap lan luot hai so a va b: \n");
    scanf("%d %d", &a, &b);
    do{
        printf("vui long chon phep tinh: \n 1. tong \n 2. hieu \n 3. tich \n 4. hieu\n 5. thoat\n");
        scanf("%d", &phep);
        while(phep > 5 || phep < 1){
            printf("vui long nhap lai: \n");
            scanf("%d", &phep);
        }
        
        switch(phep){
            case 1:
                printf("phep cong: %d + %d = %d \n", a, b, a+b);
                break;
            case 2:
                printf("phep tru: %d - %d = %d \n", a, b, a-b);
                break;
            case 3:
                printf("phep nhan: %d x %d = %d \n", a, b, a*b);
                break;
            case 4:
                if(b == 0){
                    printf("khong the chia cho 0! \nvui long nhap lai: \n");
                }
                else{
                printf("phep chia: %d : %d = %d \n", a, b, a/b);
                
                }
                break;
            default:
                //
                break;

        }
        
    }while(phep!=5);
    printf(" hehehe");
    return 0;
}
