/* Dangling pointer(scenario2)*/
#include<stdio.h>
#include<stdlib.h>
int* Danglingptr(int x){

        int  *ptr1 = x;
	printf("%d\n",*ptr1);
	printf("%p\n",ptr1);
	int *ptr2 = ptr1;
	printf("%d\n",*ptr2);

}
void main(){
	int x = 20;
	Danglingptr(20);
}
