/* take number of rows from the user
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5*/
#include<stdio.h>
void main(){
	int row;
	int x = 1;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=row;j>=i;j--){
			printf("%d ",x);
			x++;
		}
		printf("\n");
		x = i+1;
	}
}
