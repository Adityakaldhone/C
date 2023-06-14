#include<stdio.h>
void main(){
	int arr[]  ={ 1,2,3,4,5,6};
	int *ptr = arr;
	printf("%d",*(ptr + 1));
}
