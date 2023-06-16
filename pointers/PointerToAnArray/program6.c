#include<stdio.h>
void main(){

	int carr[5] = {10,20,30,40,50};
	int carr1[5] = {60,70,80,90,100};
	int (*ptr)[5] = &carr;
	int *ptr1 = &carr[1];
	int *ptr2 = carr;
	int (*ptr3)[5] = &carr;
	printf("%d\n",*(*ptr+4));
	ptr++;
	printf("%d\n",**ptr);

}
