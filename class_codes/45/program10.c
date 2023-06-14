/* calloc(contineous memory allocation)*/
#include <stdio.h>
#include<stdlib.h>
void main(){

	int *ptr = (int*)calloc(5,sizeof(int));
	for(int i=0;i<5;i++){
		*(ptr + i) = 10+i;
	}
	for(int i=0;i<5;i++){
		printf("%d\n",*(ptr+i));
	}
	int *ptr1 = (int*)realloc(ptr,8);
	for(int i=0;i<5;i++){
		*(ptr1 + i) = 10+i;
	}
	for(int i=0;i<5;i++){
		printf("%d\n",*(ptr1+i));
	}
}
