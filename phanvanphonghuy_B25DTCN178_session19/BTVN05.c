#include<stdio.h>

int compareArrays(int *a, int *b, int n){
	for(int i = 0 ; i < n ; i ++){
		if(*(a+i)!=*(b+i)){
			return 0;
		}
	}
	return 1;
}

int main(){
	int a[100],b[100];
	int n;
	int result;
	
	printf("Nhap so phan tu (a),(b) :");
	scanf("%d",&n);
	
	printf("mang a:\n");
	for(int i =0 ; i < n ; i++){
		printf("arr[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("mang b :\n");
	for(int i =0 ; i < n ; i++){
		printf("arr[%d]:",i);
		scanf("%d",&b[i]);
	}
	result = compareArrays(a,b,n);
	if(result == 0){
		printf("hai mang khac nhau");
	}else{
		printf("hai mang giong nhau");
	}
	
}
