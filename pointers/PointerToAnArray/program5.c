#include<stdio.h>
void main(){

	int arr[5] = {10,20,30,40,50};
	int *ptr1 = arr;
	int *ptr2 = &arr[2];
//	int (*ptr3)[3] = &arr;
       int (*ptr4)[5] = &arr;	
       printf("%p\n",*ptr4);
       printf("%d\n",**ptr4);
}
