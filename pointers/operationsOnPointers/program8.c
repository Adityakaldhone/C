#include <stdio.h>
void main(){

	int arr[] = {10,20,30,40};
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[2];
	printf("%d\n",ptr1*ptr2);//WE CANNOT PERFORM MULTIPLICATION OPERATION ON POINTERS
				 //invalid operands to binry *
}
