/* Take number of rows from the user
 *   d d d d
 *     c c c
 *       b b
 *         a     */
#include <stdio.h>
void main(){

	int row;
	int ch = 96;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
		
			printf(" \t ");
		}
		int num=1;
	for(int j=row;j>=i;j--){
	
		printf("%c\t ",ch+row);
		
	}
	ch--;
	printf("\n");
}
}
