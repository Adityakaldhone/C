/* 1
 * 2 1
 * 3 2 1
 * 4 3 2 1
 * 3 2 1
 * 2 1
 * 1
 *
         */
 
#include<stdio.h>
void main(){

	int row,col;
	int num;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&row,&col);
	for(int i=0;i<=row*2-1;i++){
		int num=1;
		if(i<=row){
		
			col = i;
			num = i;
		 
		}else{
			col = 2*row-i;
			num = 2*row-i;
		        
		}

		for(int j=0;j<col;j++){
		
			printf("%d ",num);
			num--;
		
		}
		printf("\n");
	}



}
