/* Take number of rows from the user
 *   4 3 2 1
 *     3 2 1
 *       2 1
 *         1   */
#include <stdio.h>
void main(){

	int row,j;
	int num;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	num=row;
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
		
			printf(" \t ");
		}
	for(int j=row;j>=i;j--){
	
		printf("%d\t ",num);
		num--;
	}
	num = row-i;
	printf("\n");
}
}
