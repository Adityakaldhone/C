/* Take number of rows from the user
 *   1 2 3 4
 *     1 2 3
 *       1 2
 *         1     */
#include <stdio.h>
void main(){

	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
		
			printf(" \t ");
		}
		int num=1;
	for(int j=row;j>=i;j--){
	
		printf("%d\t ",num);
		num++;
	}
	printf("\n");
}
}
