/* take number of rows from the user
 * 1 2 3 4
 * a b c d 
 * 5 6 7 8
 * e f g h */
#include<stdio.h>
void main(){
	int row;
	int x =1;
	char ch = 'a';
	printf("Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(i%2==1){
				printf("%d ",x);
				x++;
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
