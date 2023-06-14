/* Take number from the user 
          
       1
       2  4
       3  6  9
       4  8  12  16   
*/



#include <stdio.h>
void main() {
	
	int row;
	printf("Enter number of row\n");
	scanf("%d",&row);
	
	int num = 1;

	for(int i=1; i<=row; i++) {
		for(int j=1; j<=i; j++) {
			printf("%d\t",num*j);
			
		}
		printf("\n");
		num++;
	}


}
