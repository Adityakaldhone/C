/* Take number of rows from the user
 * 1 3 5 7 9
     9 7 5 3
       3 5 7
         7 5
	   5   */
#include <stdio.h>
void main(){
	int row,i;
	int num=1;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
			printf("  ");
		}

	for(int j=row;j>=i;j--){
		if(i%2==1 ){

			printf("%d ",num);
			num = num +2;
		}else{
		
			printf("%d ",num);
			num = num-2;
		}
	
	}	
	
	if(i%2==0){
	
		num = num +2;
	}else
		num = num-2;

		printf("\n");

	}
}

