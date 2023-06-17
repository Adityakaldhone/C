//write a program to create an array of size n given by the user and print array using pointer
#include<stdio.h>
void main(){

	int size;
	printf("Enter size of an array\n");
	scanf("%d",&size);
	int arr[size];
	int* ptr = arr;
	printf("Enter array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",ptr+i);
	}
	printf("The array elements are \n");
	for(int i=0;i<size;i++){
		printf("%d\n",*(ptr+i));
	}
}
