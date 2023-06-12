/* Take number of rows from the user
   4
 * 3 3
 * 2 2 2
 * 1 1 1 1
 * 2 2 2 
 * 3 3
 * 4
         */
 
#include<stdio.h>
void main(){

	int row,col;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&row,&col);
	for(int i=0;i<=row*2-1;i++){
		int num;
		num--;
		if(i<=row){
		
			col = i;
			num = row+1;
			num = num-i;
			
		 
		}else{ 
			num++;
			col = 2*row-i;
			num = num+1;
			
		        
		}

		for(int j=0;j<col;j++){
		
			printf("%d ",num);
		
		}
	
		printf("\n");
	}




}
