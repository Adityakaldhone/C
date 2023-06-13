/* strlwr(string lower) program with our library function*/
#include <stdio.h>
char* mystrlwr(char* arr){

	while(*arr !='\0'){
	
		if(*arr >= 65 && *arr<=90 ){
		
			*arr = *arr + 32;
		}
		arr++;
	}
	return arr;
}
void main(){

	char str[20] = { 'A','d','i','T','Y','a','\0'};
	puts(str);
	mystrlwr(str);
	puts(str);
}
