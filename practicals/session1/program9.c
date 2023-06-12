
/* take number of rows from the user
 * 9 8 7 
 * 6 5 4
 * 3 2 1
 * */
#include<stdio.h>
void main(){
	int row;
	printf("enter the number of rows\n");
        scanf("%d",&row);
	int x = row*row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d ",x);
			x--;
		}
		printf("\n");
	}
}
