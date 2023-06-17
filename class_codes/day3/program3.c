// WAP which shows the concept of pointer to an array
#include<stdio.h>
void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);
	int arr[size];
	int* ptr1 = arr;
	printf("Enter array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",ptr1+i);

	}
	int (*ptr2)[] = &arr;
	printf("printing the array elements using pointer to an array\n");
	for(int i=0;i<size;i++){
		printf("%d\n",*(*ptr2 + i));

	}
}
