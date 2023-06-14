/*Take number of rows from the user
 4 3 2 1 
 3 2 1
 2 1
 1 */
#include<stdio.h>
void main(){
	int row;
	int x = 4;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=4;j>=i;j--){
			printf("%d ",x);
			x--;
		}
		x = row-i;
		printf("\n");

	}
			
}
