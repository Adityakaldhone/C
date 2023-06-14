/* Take number of rows from the user
 * 4 3 2 1
 * C B A
 * 2 1
 * A  */
#include<stdio.h>
void main(){

	int row;
	//char ch = 64;
	printf("Enter number of rows");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		int x = row-(i-1);
		for(int j=1;j<=(row-(i-1));j++){
			if(i%2==1){
			
				printf("%d ",x);
				
			}else{
				printf("%c ",64+x);
			}
			x--;
		}
		printf("\n");


	}
}
