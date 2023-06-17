/* WAP which checks the given number is prime number or not */
#include <stdio.h>
int checkprime(int num){
	for(int i=2;i<=num/2;i++){

	if(num%i){
	
		return 1;
	}
	}
	return 0;
		
}
void main(){

	int x;
	printf("Enter number for checking prime number \n");
	scanf("%d",&x);
	int flag = checkprime(x);
	if(flag==1){
	
		printf("Prime number\n");
	}else{
		printf("not prime\n");
	}
}
