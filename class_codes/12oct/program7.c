/* take number of rows from the user
 * D D D D
 * C C C C 
 * B B B B 
 * A A A A */
#include<stdio.h>
void main(){
	int row;
	char ch = 64 ;
	printf("Enter number of rows\n");
		scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%c ",row +ch);	
		}
		ch--;
		printf("\n");
	}
}
