/* VOID POINTER*/
/* in void pointer we cannot derefrance the pointer*/
#include<stdio.h>
void main(){
	
	int x = 10;
	int *iptr = &x;
	char *cptr = &x;
	printf("%d\n",*iptr);
	printf("%d\n",*cptr);
}
