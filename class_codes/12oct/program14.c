/* Take number of rows from the user
1
2 2 
3 3 3
4 4 4 4*/
#include <stdio.h>
void main(){
	int row;
	int num = 1;
	printf("Enter number of rows\n");
	scanf("%d",&row);
	for(int i =1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",num);
			
		}
		num++;
		printf("\n");
	}
}
