#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("vui long nhap lan luot gia tri cua ca cach a, b, c: \n");
	scanf("%d %d %d", &a, &b, &c);
	printf("do dai cac canh: \n a = %d b = %d c = %d ", a, b, c);
	if(a + b > c && a + c > b && b + c > a){
	    printf("tam giac nay hop le\n");
	    if(a == b && b ==c){
	        printf("va day la tam giac deu\n");
	    }
	    else if(a == b || a == c || b == c){
	        printf("va day la tam giac can\n");
	    }
	    else {
	        printf("va day la tam giac thuong\n");
	    }
	}
	else{
	    printf("tam giac nay khong hop le, vui long thu lai sau");
	}
	return 0;
}
