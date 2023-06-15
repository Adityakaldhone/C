#include<stdio.h>
void main(){

	char ch1 = 'x';
	char ch2 = 'y';
	char *ptr = &ch1;
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	printf("%p\n",(ptr+1.5));  // invalid operands to binary +
	printf("%d\n",*(ptr+1.5)); // invlaid operands to binary +
}
