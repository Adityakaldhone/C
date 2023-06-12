/* Take number of rows from the user
 d d d d d d d
   c c c c c
     b b b
       a
       */
#include<stdio.h>
void main(){

	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	char ch = 96;
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
		
			printf("  ");
		}
	
		for(int j=1;j<=2*row-i*2+1;j++){
		
			printf("%c ",ch+row);

		}
		printf("\n");
		ch--;
	}
}
