/* take number of rows from the user
 * 1 3 5
 * 5 7 9 
 * 9 11 13
 * */
#include<stdio.h>
void main(){
	int num =1;
	int row;
	printf("Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j =1;j<=row;j++){
			printf("%d ",num);
			num = num+2;
		}
		num = num-2;
		printf("\n");
	}
}
