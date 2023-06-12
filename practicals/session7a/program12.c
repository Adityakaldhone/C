/* Take number of rows from the user
       4
     3 6 3
   2 4 6 4 2
 1 2 3 4 3 2 1    */
#include<stdio.h>
void main(){

	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int num = (row+1)-i;
	
		for(int sp=row;sp>i;sp--){
		
			printf("  ");
		}
		for(int j=1;j<=2*i-1;j++){
			if(j<i){
			printf("%d ",num);
			num = num+(row+1)-i;

			}else
				int num=(1+i);
				printf("%d ",num);
				
				
		
		}
		printf("\n");
	}
}
