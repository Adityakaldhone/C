/* strcat(string concatanation)*/
#include<stdio.h>
#include<string.h>
void main(){

	char arr[20] = {'A','D','I','T','Y','A','\0'};
	char *str = "KALDHONE";
	puts(arr);
	puts(str);
	strcat(arr,str);
	puts(arr);
	puts(str);
}
