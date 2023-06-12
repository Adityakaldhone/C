/* WAP to print the square of odd numbers between given range from the user*/
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start and end");
	scanf("%d%d",&start,&end);
	for(int i=start;i<=end;i++){
		if(i%2 !=0){
			printf("%d\n",i*i);
		}
	}
}
