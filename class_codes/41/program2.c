#include<stdio.h>
void main(){

	char arr[20];
	printf("Enter player name");
	gets(arr);
	char *ptr = arr;
	puts(ptr);
}
