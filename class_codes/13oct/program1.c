/* Write a program to print the factorial of the given number*/
#include <stdio.h>
void main(){
	long store = 1;
	int num;
	printf("Enter the number to get the factorial of the given number\n");
	scanf("%d",&num);
	for(int i=num;num>=1;num--){
		store = store*num;

	}
	printf("%ld\n",store);
}
