/* Take number of rows from the user
 d d d d
 C C C
 b b 
 A */
#include <stdio.h>
void main(){
	int row;
	char ch1 = 96;
	char ch2  =64;
	printf("Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=row;j>=i;j--){
			if(i%2==1){
				printf("%c ",ch1 + row);
			}else{
				printf("%c ",ch2 + row);
			}
		}
		printf("\n");
		ch1 = ch1 - 1;
		ch2 = ch2 - 1;
	}
}
