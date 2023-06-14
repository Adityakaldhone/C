/* take number of rows from the user
 * 1 4 7 
 * 10 13 16
 * 19 22 25 */
#include<stdio.h>
void main(){
	int num = 1;
	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d ",num);
			num = num +3;
		}
		printf("\n");
	}

}
