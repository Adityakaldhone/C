/* Take number of rows from the user
 *   100   9   64   7
 *        36    5  16
 *              3   4
 *                  1    */
#include <stdio.h>
void main(){

	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	int num = (row*(row+1)/2);
	int y=1;
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
		
			printf("    ");
		}
	for(int j=row;j>=i;j--){
		if(y%2==1){
		
			printf("%d  ",num*num );
			

		}else
			printf("%d  ",num);
			
	num--;
	y++;
	}

	printf("\n");
}
}
