/* take number of rows from the user
D C B A
C B A 
B A
A  */
#include<stdio.h>
void main(){
	int row;
	char ch = 64;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=row;j>=i;j--){
			printf("%c ",ch + j);
			
		}
		printf("\n");
		ch = ch -1;
	}
}
