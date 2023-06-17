// WAP which shows the concept of array of pointer 
#include<stdio.h>
void main(){

	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int *arr[4]  = {&a,&b,&c,&d};
	printf("the array elements are\n");
	for(int i=0;i<4;i++){
	
		printf("%d\n",*(arr[i]));
	}
}
