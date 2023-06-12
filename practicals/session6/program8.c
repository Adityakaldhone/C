/* Take number of rows from the user
 *   D D D D
 *     c c c
 *       B B
 *         a     */
#include <stdio.h>
void main(){

	int row;
	char ch = 64;
	char ch1 = 96;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
		
			printf(" \t ");
		}
		int num=1;
	for(int j=row;j>=i;j--){
		if(i%2==1){
			printf("%c\t",ch+row);

		}else
			printf("%c\t",ch1+row);	
	}
	ch--;
	ch1--;
	printf("\n");
}
}
