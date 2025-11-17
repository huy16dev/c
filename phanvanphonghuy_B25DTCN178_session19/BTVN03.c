#include<stdio.h>
float average(int *arr, int n){
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum+=arr[i];
	}
	return (float)sum / n;
}
	
int main(){
	int n;
	int sum;
	int arr[100];
	printf("Nhap so phan tu trong mang :");
	scanf("%d",&n);
	
	for(int i =0 ; i < n ; i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	float trungbinhcong = average(arr,n);
	printf("Gia tri trung binh cua mang :%.2f\n",trungbinhcong);
}
