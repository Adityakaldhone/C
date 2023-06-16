#include<stdio.h>
void main(){

	int arr[5] = {10,20,30,40,50};
	int arr1[5] = {60,70,80,90,100};
	int *ptr1 = arr + 1;
	//int *ptr2 = (&arr1+1);
	printf("%d\n",*ptr1);
	//printf("%d\n",*ptr2);
}
