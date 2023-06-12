/* Take number of rows from  user
 4 4 4 4
3 3 3 3
2 2 2 2
1 1 1 1*/
#include<stdio.h>
void main(){
	int row;
	
	 printf("Enter the number of rows");
	scanf("%d",&row);
	int x =row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
		

		printf("%d",x);
		
		}
	x--;
	printf("\n");
	}
}
