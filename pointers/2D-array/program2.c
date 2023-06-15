#include<stdio.h>
void main(){

	int row;
	int column;
	int sum = 0;
	printf("Enter number of rows and columns\n");
	scanf("%d %d",&row,&column);
	int arr[row][column];
	printf("Enter array elements\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
			sum = sum +arr[i][j];
		}
	}		
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){ 
//			printf("%d\n",arr[j][j]);
//			sum = sum+arr[i][j];
//		}
//	}
	printf("The sum is:%d\n",sum);
}
