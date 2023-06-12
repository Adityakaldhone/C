/*Take number of rows from the user
  1 2 3 4 5 6 7
    2 3 4 3 2
      3 4 3
        4
   */
#include<stdio.h>
void main(){
	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);


	for(int i=1;i<=row;i++){
		int num = 1;:wq

	
		for(int sp =1;sp<i;sp++){
		
			printf("  ");

		}
		for(int j=1;j<=(2*row-2*i+1);j++){
		
				printf("%d ",num);
				num++;
		}
				
				
				printf("\n");

	}

}
