/* Take number of rows from the user
 *   a B c D 
 *     E f G
 *       h I
 *         J     */
#include <stdio.h>
void main(){

	int row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	char ch=65;
	char ch1 = 97;
	int num=1;

	for(int i=1;i<=row;i++){
		for(int sp=1;sp<i;sp++){
		
			printf(" \t ");
	}
	//int num=row;
	for(int j=row;j>=i;j--){
	
		if((num%2)==1){
		
			printf("%c\t",ch1);
		}else
			printf("%c\t",ch);
		ch++;
		ch1++;
		num++;

	}if(i%2==1){

	num++;
	}else
		num=num-2;
	
	printf("\n");
}
}
