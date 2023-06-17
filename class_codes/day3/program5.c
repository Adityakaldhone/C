//WAP to create array of size n given by the user and take the values from user and sort the array in ascending order and print the sorted array
#include<stdio.h>
void main(){

	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter array elements \n");
	int arr[size];
	for(int i=0;i<size;i++){
	
		scanf("%d",&arr[i]);
	}
	int temp;
	for(int i=0;i<size;i++){
	
	
		for(int j=0;j<size-1-i;j++){
		
			if(arr[j]>arr[j+1]){
			
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("The array after sorting in ascending order is\n");
	for(int i=0;i<size;i++){
	
		printf("%d\n",arr[i]);
	}

}
