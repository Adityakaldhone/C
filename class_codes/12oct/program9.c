/* take number of rows from the user
 * A b C 
 * D e F
 * G h I
 * */
#include<stdio.h>
void main(){
	int row;
	char ch1 = 96;
	char ch2 = 64;
	printf( " Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j%2==0){
				printf("%c ",j+ch1);
			}else{
				printf("%c ",j+ch2);
			}
                }
		ch1= ch1+row;

		ch2 = ch2 +row;
		printf("\n");

	}

}
