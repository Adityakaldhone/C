/* WAP of swapping two numbers by using call by value*/
#include<stdio.h>
void swap(int ,int);
void main(){
	int x,y;
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	printf("values before swapping\n");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	swap(x,y);
}
void swap(int x,int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("values after swaping\n");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
}

