/* Take number of rows from the user 
     *
     *  *
     *  *  *
     *  *  *  *  
     *  *  *
     *  *
     *
 */
#include <stdio.h>
void main(){

	int row,col;
	printf("Enter the number of rows\n");
	scanf("%d%d",&row,&col);
	for(int i=0;i<=row*2-1;i++){
	
		if(i<=row){
		
			col = i;
		}else{
			col = 2*row-i;
	}
		for(int j=0;j<col;j++){
		
			printf("* ");
		}
		printf("\n");
	}

	
}

