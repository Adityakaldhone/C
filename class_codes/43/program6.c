// array of character pointers
#include <stdio.h>
#include <string.h>
void main(){
	char* arr[3] = {"Aditya","Dhiraj","Manish" };
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);
	puts(arr[0]);
	printf("%s\n",arr[2]);
	strcpy(arr[2],"Rahul");//segmentation fault(we can't change because it the char pointer are constant)
	puts(arr[0]);
	printf("%s\n",arr[2]);

}
