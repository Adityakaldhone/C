/* Take number from the user 
          
     4
     8  12
     16 20 24
     18 32 36 40
*/



#include <stdio.h>
void main() {
	
	int row;
	printf("Enter number of row\n");
	scanf("%d",&row);
	
	int num = 1;

	for(int i=1; i<=row; i++) {
		for(int j=1; j<=i; j++) {
			printf("%d\t",row*num);
		  	num++;	
		}
		printf("\n");

	}


}
