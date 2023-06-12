/*  A b C d
 *    e G i
 *      K n
 *        q  */

#include <stdio.h>
void main(){

	int row;
	char ch = 65;
	char ch1 = 97;
	printf("Enter number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
	
		for(int sp =1;sp<i;sp++){
		
			printf("  ");
		}
	for(int j=row;j>=i;j--){
	
		if((i+j)%2==1){
			printf("%c ",ch);
		
		}else{
			printf("%c ",ch1);
		}
			ch1=ch1+i;
			ch=ch+i;
	}
	printf("\n");
	}
}
