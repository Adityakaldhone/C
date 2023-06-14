#include<stdio.h>
void main(){
	int row;
		printf("Enter the number of rows");
		scanf("%d",&row);
		int x = 1;
		char ch = 'a';
		for(int i=1;i<=row;i++){
			for(int j=1;j<=row;j++){
				if((i+2)%3==0){
				printf("%d ",x);
				x++;
				}
				
				else if((i+2)%3==0)	{
					printf("%c ",ch);
					ch++;
				}
				else{
				
					printf("# ");
				}
			}
			printf("\n");
		/*	if(i%2==0){
			for(int k=1;k<=row;k++){
				printf("# ");
			}
			printf("\n");

			}*/
			
               }
}
