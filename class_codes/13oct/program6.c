/* take number of rows from the user
 a b c d 
 a b c 
 a b 
 a  */
#include<stdio.h>
void main(){
	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		char ch = 97;
		for(int j=row;j>=i;j--){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
