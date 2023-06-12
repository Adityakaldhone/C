/*Take number of rows from the user
 * * * * * * *
   * * * * *
     * * *
       *
   */
#include<stdio.h>
void main(){
	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);


	for(int i=1;i<=row;i++){
	
		for(int sp =1;sp<i;sp++){
		
			printf("  ");
		}
		for(int j=1;j<=(2*row-2*i+1);j++){
		
				printf("* ");
		}
		printf("\n");

	}

}
