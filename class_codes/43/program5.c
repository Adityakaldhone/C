//array of strings

#include <stdio.h>
void main(){

	char arr[3][10] = {"Aditya","Manish" ,"Dhiraj" };
	printf("%p\n",&(arr[1]));
	printf("%p\n",&(arr[1][1]));
	printf("%p\n",arr[2]);
	
	}
