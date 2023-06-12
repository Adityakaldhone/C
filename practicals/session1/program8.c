
/* Take number of rows from thei user
  A A A
B B B
C C C*/
#include<stdio.h>
void main(){
	int row;
         char ch = 'A';	
	 printf("Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
		printf("%c ",ch);
		
		}
		ch++;
		printf("\n");
	}
}
