/* Write a program to print the numbers whose factorial is even.Take range from the user 
 * Input: start 1
 *        End   5
 *        output: 2 3 4 5   */
#include <stdio.h>
void main(){
	int start,end;
	int fact =1;
	printf("Enter start and end numbers\n");
	scanf("%d%d",&start,&end);
	for(int i=start;i<=end;i++){
		fact = fact*i;
		if(fact%2==0){
		printf("%d ",i);
		}
	}

}
