/*Take number of rows from the user
 * * * *
 * * *
 * * 
 *        */
#include<stdio.h>
void main(){
	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=row;j>=i;j--){
			printf("* ");
		}
		printf("\n");

	}
			
}
