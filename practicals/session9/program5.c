/* Take number of rows from the user
   3
   2 3
   1 2 3
   0 1 2 3
   1 2 3
   2 3
   3

         */
 
#include<stdio.h>
void main(){

	int row,col;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&row,&col);
	for(int i=0;i<=row*2-1;i++){
		int num;
		if(i<=row){
		
			col = i;
			num = row-i;
			
		 
		}else{ 
			col = 2*row-i;
			num = i-row;

			
			
		        
		}

		for(int j=0;j<col;j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	
		
	}




}
