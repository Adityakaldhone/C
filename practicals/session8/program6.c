/* Take number of rows from the user
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
        1

*/
#include<stdio.h>
void main(){

	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	int x = row;
	for(int i=1;i<=row;i++){
		int num=1;
	
		for(int sp=1;sp<i;sp++){
		
			printf("  ");
		}

				for(int j=1;j<=2*row-i*2+1;j++){
					if(j<x){
				printf("%d ",num);
				num++;
					}else{
						printf("%d ",num);
					num--;
					}
				}
				x--;
				printf("\n");
		}
	}

