/* Take number of rows from the user
             *
	     *  *
	     *  *  *           */
#include <stdio.h>
void main(){
	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);
	for(int i =1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
