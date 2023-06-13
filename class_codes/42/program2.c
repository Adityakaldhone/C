/* concatanation of strings using our library function*/
#include <stdio.h>
char* Mystrcat(char* arr,char* str ){
	while(*arr !='\0'){
	
		arr++;
	}
	while(*str !='\0'){
	
		*arr = *str;
		str++;
		arr++;
	}
	*arr = '\0';
  return arr;
  }
void main(){
	char arr[20] = {'A','D','I','T','Y','A','\0'};
	char *str = "KALDHONE";
	puts(arr);
	puts(str);
	Mystrcat(arr,str);
	puts(arr);
	puts(str);
}
