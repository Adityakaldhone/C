/* take number of rows from the user
 * 9 64 7
 * 35 5 16
 * 3 4 1*/

#include<stdio.h>
void main(){
	int row;
	printf("Enter number of rows\n");
		scanf("%d",&row);
		int x = row*row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j%2==1){
				printf("%d ",x);
			}else{
				printf("%d ",x*x);
			}
			x--;
		}
                 printf("\n");
	
	}
}
