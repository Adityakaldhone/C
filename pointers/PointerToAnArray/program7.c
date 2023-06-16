#include<stdio.h>
void main(){

	int  arr[3] = {10,20,30};
	int arr1[3] = {40,50,60};
	//int (*ptr1)[3] = &arr;     //excess element in array initializer
	int (*ptr2)[3] = &arr;
	//int (*ptr2//excess elements in scaler initializer
	int (*ptr3)[3] = &arr1;
	printf("%d\n",**ptr2);
	printf("%d\n",**ptr3);
        printf("%d\n",*(*ptr2+1));
	printf("%d\n",*(*ptr3+2));

	
}
