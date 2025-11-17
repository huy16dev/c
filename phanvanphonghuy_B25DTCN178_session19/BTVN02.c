#include <stdio.h>

void countEvenOdd(int *arr, int n, int *even, int *odd){
	*even = 0;
	for (int i = 0 ; i < n ; i ++){
		if(arr[i]%2==0){
			(*even)++;
		}
	}
	*odd = 0;
	for(int i = 0 ;i < n; i++){
		if(arr[i]%2 == 1){
			(*odd)++;
		}
	}
}

int main(){
	int n;
	int arr[100];
	int odd,even;
	
	printf("Nhap so phan tu trong mang :");
	scanf("%d",&n);
	
	for(int i =0 ; i<n; i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	countEvenOdd(arr,n,&even,&odd);
	printf("So chan trong mang :%d\n",even);
	printf("So le trong mang : %d\n",odd);
	
}
