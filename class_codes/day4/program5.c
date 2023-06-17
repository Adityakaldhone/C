/* Write a function which reverse number of the given number */
#include<stdio.h>
int revnum(int num){

	int rev=0;
	int rem;
	while(num!=0){
	
		rem = num%10;
		rev = rev*10+rem;
		num/=10;
	}
	return rev;
}
void main(){

	int x;
	printf("Enter number for reverse\n");
	scanf("%d",&x);
	int rev = revnum(x);
	printf("Reverse number is%d\n",rev);

}
