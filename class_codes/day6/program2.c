/* WAP to use predefined length function and your own length function for array(get array from the user)*/
#include<stdio.h>
#include<string.h>
void main(){
	int size;
	char arr[size];
	printf("Enter size of array \n");
	scanf("%d",&size);
	printf("Enter array elements\n");
	for(int i=0;i<size;i++){
	
		scanf("%c",&arr[i]);
	}
	for(int i=0;i<size;i++){
	
		printf("%d\n",*(arr+i));
	}
	
}
