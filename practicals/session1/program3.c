/* Take number of rows from the user
 * 1 2 3 4 
 * 5 6 7 8 
 * 9 10 11 12 */
#include<stdio.h>
void main(){
	int row;
	int x=1;
	 printf("Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=4;j++){
		

		printf("%d ",x);
		x++;
		}
	
	printf("\n");
	}
}
