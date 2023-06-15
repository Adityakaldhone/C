/* ADDITION OPERATION*/
#include<stdio.h>
void main(){

	int x = 20;
	int y= 30;
	int *ptr1 = &x;
	int *ptr2 = &y;
	printf("%d\n",*ptr1+*ptr2);
	printf("%p\n",ptr1+ptr2);//ERROR: INVALID OPERANDS TO BINARY + (HAVE 'INT*' AND 'INT*')
}
