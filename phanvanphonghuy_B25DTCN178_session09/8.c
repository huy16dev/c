#include <stdio.h>

int main() {
	int n;
	printf("nhap so n (so o: n*n): ");
	scanf("%d", &n);
	int arr[n][n];
	//gan value
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			printf("gan gia tri cho arr[%d][%d] :", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	//in bang ma tran nxn
	printf("bang gia tri vua nhap: \n");
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}

	//tinh tong gia tri 
	int sum = 0;
	for(int i = 0; i<n; i++) {
		for(int j = n - 1 - i; j >=0; j--) {
		    sum += arr[i][j];
		    break;

	    }
	}

	printf("tong gia tri ptu duong cheo phu la: %d", sum);
	
	/*int len = n*n;
	float average = (float)sum/len;
	printf("\ngia tri tb cac ptu la: %.2f", average);*/
	

	  /*nhap so n (so o: n*n): 3
        gan gia tri cho arr[0][0] :1
        gan gia tri cho arr[0][1] :1
        gan gia tri cho arr[0][2] :1
        gan gia tri cho arr[1][0] :1
        gan gia tri cho arr[1][1] :100
        gan gia tri cho arr[1][2] :1
        gan gia tri cho arr[2][0] :1
        gan gia tri cho arr[2][1] :1
        gan gia tri cho arr[2][2] :1
        bang gia tri vua nhap: 
        1  1  1  
        1  100  1  
        1  1  1  
        tong cac gia tri duong bien la: 8*/

	/*
	//vong lap tim max
	int i = 0, j =0,x, y;
	int max = arr[0][0];
	for(; i<n; i++){
	    for(; j<n; j++){
	        if(arr[i][j] > max){
	            max = arr[i][j];
	            x = i;
	            y =j;
	        }
	    }
	}
	printf("so lon nhat trong bang la: arr[%d][%d] = %d", x, y, max);*/
	return 0;

}
