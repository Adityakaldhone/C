// Odd number square

#include<stdio.h>

void main(){
	
	int num1,num2;

	printf("Enter the first Num :");
	scanf("%d",&num1);

	printf("Enter the Last Num :");
	scanf("%d",&num2);

	for(int i = num1;i <= num2;i++){
		if(i %2 != 0){
			printf("Square of %d  Odd Number : %d\n",i,i * i);
		}
	}
}
