/*Take number of rows from the user
 4 3 2 1 
 4 3 2
 4 3
 4 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int x=row;
		for(int j=row;j>=i;j--){
			printf("%d ",x);
			x--;
		}
		printf("\n");

	}
			
}
