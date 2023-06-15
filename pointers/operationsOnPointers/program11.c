#include<stdio.h>
void main(){

	int arr[] = {10,20,30,40};
	int *ptr = &arr[0];
	printf("%d\n",(*ptr++));   //10
	printf("%d\n",(*ptr++));   //20
	printf("%d\n",((*ptr)++)); // 30
	printf("%d\n",((*ptr))++); //31
}
