/* Take number of rows from thei user
 a b c 
 d e f 
 g h i  */
#include<stdio.h>
void main(){
	int row;
	char ch ='a';
	 printf("Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=3;j++){
		

		printf("%c",ch );
		ch++;
		}
	
	printf("\n");
	}
}
