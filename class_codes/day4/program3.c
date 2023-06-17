// WAP of swapping two numbers by using call by adress
#include <stdio.h>
void swap(int* x,int* y){

	int temp;
	temp = *x;
	*x  = *y;
	*y = temp;
}
void main(){

	int x;
	int y;
	printf("Enter first number\n");
	scanf("%d",&x);
	printf("Enter second number\n");
	scanf("%d",&y);
	printf("values before swapping are \n");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	swap(&x,&y);
	printf("Values after swapping are:");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
}
