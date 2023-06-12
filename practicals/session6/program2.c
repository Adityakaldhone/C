/* Take number of rows from the user
 *   1 2 3 4
 *     5 6 7
 *       8 9 
 *        10     */
#include <stdio.h>
void main(){

	int row;
	int num = 1;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
		
			printf(" \t ");
		}
	for(int j=row;j>=i;j--){
	
		printf("%d\t ",num);
		num++;
	}
	printf("\n");
}
}
