/* take number of rows from the user
 * 1 3 5
 * 7 9 11
 * 13 15 17 */

#include<stdio.h>
void main(){
	int row;
	printf("enter the number of rows\n");
        scanf("%d",&row);
	int x = row*row;
	int y = 1;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d ",y);
			y = y+2;
		}
		printf("\n");
	}
}
