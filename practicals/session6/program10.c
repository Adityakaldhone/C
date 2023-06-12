/* Take number of rows from the user
 *     a B c D 
 *       e F g
 *         H i
 *           J    */
#include <stdio.h>
void main(){
	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);
	char ch = 97;
	char ch1 = 65;
	int num=1;
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
			printf("  ");
		}
	for(int j=row;j>=i;j--){
	        if(num%2==1){
			printf("%c ",ch);

		}else
			printf("%c ",ch1);
		ch++;
		ch1++;
		num++;
	}
	printf("\n");
}
}

