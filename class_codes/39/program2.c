/* returning array from a function
 * in c we can't return array directly*/
#include<stdio.h>
int* fun(){
	int arr[] = {10,20,30 };
	return arr;
}
void main(){
	int *ptr = fun();
	printf("%d\n",*ptr);
}
