/* ( string compare using our created library function)*/
#include<stdio.h>
#include <string.h>
int mystrcmp(char* str,char* str1){
	while(*str !='\0'){
	if(*str ==*str1){
		str++;
		str1++;
	
	}else{
		return(*str - *str1 );
	}
	}

	return 0;
}
void main(){

	char *str = "ADITYA";
	char *str1 = "ADITYA";
	puts(str);
	puts(str1);
	int diff = 1;
	if(strlen(str) == strlen(str1)){
	
		diff = mystrcmp(str,str1);

	}
	if(diff ==0){
		printf("Strings are equal\n");

	}else {
		printf("Strings are not equal\n");
	}
}
