
// Write a function which returns the addition of two numbers and print the answer in main function

#include <stdio.h>
void add(int x ,int y){
	sum = x + y;
	
	
	
	return sum;

}
void main(){

	int x;
	int y;
	int sum=0;
	printf("Enter the value of x and y \n");
	scanf("%d%d",&x,&y);
	add(x,y);
	printf("%d",sum);

}


