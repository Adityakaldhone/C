//WAP which shows the concept of array of pointer to an array
#include<stdio.h>
void main(){

	int arr1[] = {10,20,30,40};
	int arr2[] = {11,12,13,14};
	int arr3[] = {1,2,3,4};
	int (*ptr[])[4] = {&arr1,&arr2,&arr3};
	for(int i=0;i<3;i++){
	
		for(int j=0;j<4;j++){
	
			printf("%d\n",**(*ptr+i)+j);
		}
	}
}
