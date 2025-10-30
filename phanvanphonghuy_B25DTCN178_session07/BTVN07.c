#include<stdio.h>
#include<math.h>

int main(){
	//1. Khoi tao 2 bien a va b
	//2. Cho nguoi dung nhap vao gia tri cua a, b
	/*3. Su dung vong lap for duyet tu a -> b, tam goi so tai lan lap la i
		Moi lan duyet kiem tra xem so do co phai la so nguyen to khong?
			int isPrime = 1 ; 
		tao vong lap for duyet tu 2 -> <i, tam goi la j
			ben trong chung ta kiem tra neu i % j -> Cap nhat lai isPrime = 0
		kiem tra xem isPrime == 1 ? -> in ra i
		*/	
	    int a,b;
	    printf("Nhap vao a, b: ");
        do{
            scanf("%d %d",&a,&b);
            if(a < 0 || b < 0){
                printf("Day khong phai 2 so nguyen duong, vui long nhap lai \n");
            }
            else{
                if(a < b){
                    break;
                }
                printf("So %d lon hon so %d, vui long nhap lai \n", a, b);
            }
        }while(1);
	    printf("Cac so nguyen to nam trong khoang %d -> %d la: \n",a,b);
	    for(int i = a; i<=b;i++){
		    if(i<2){
			    continue;
		    }
		    int isPrime = 1; //Dat flag: 1 la so nguyen to, 0 la khong phai so nguyen to
		    for(int j = 2; j<i;j++){
			    if(i%j==0){
				    isPrime = 0;
				    break;
			}
		}
		    if(isPrime == 1){
			    printf("%d ",i);
		    }	
	}
	return 0;
}