#include<stdio.h>

int countValue(int *arr, int n, int x){
	int count =0;
	for(int i = 0 ; i < n ; i++){
		if(arr[i]==x){
			count++;
		}
	}
	return count;
}

int main(){
	int n;
	int arr[100];
	int x;
	int count;
	
	printf("Nhap so phan tu trong mang :");
	scanf("%d",&n);
	
	for(int i =0 ; i < n ; i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("So can dem lan xuat hien :");
	scanf("%d",&x);
	count = countValue(arr,n,x);
	printf("So %d xuat hien : %d lan",x,count);
}
