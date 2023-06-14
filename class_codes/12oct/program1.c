/* WAP to print the odd numbers as it is and cube of even numbers between given range from the user
 * input: start 10
 *         End 20*/
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start and end");
	scanf("%d%d",&start,&end);
	for(int i = start;i<=end;i++){
		if(i%2==0){
			printf("%d ",i*i);
		}else{
			printf("%d ",i);
		}
	}
}
