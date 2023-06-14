/* take number of rows from the user
 * 4
 * 3 3
 * 2 2 2 
 * 1 1 1 1*/
#include <stdio.h>
void main(){
	int row;
	printf("Enter the number of rows");
	scanf("%d",&row);
		int num = row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",num);
		
		
		}
		printf("\n");
		num--;
	}
}
