/* Take number of rows from the user
 * d d d d 
 * c c c c
 * b b b b
 * a a a a
 * */
#include<stdio.h>
void main(){
	int row;
	char ch = 96 ;
	printf("Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j = 1;j<=row;j++){
			printf("%c ",ch + row);
		}
		ch--;
		printf("\n");
	}

}
