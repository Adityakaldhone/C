/* code using my mystrcpy(string copy)function*/

#include <stdio.h>
#include <string.h>
char* mystrcpy(char* dest,char* src,int num){

	while(*src!='\0'){
	
		if(strlen(src) != num && strlen(src) >=num ){
		
			*dest = *src;
		}
		
		if(num !='\0' ){
			
				*dest = *src;
				
			}
		dest++;
		src++;
	}
	dest = '\0';
	return dest;
}
void main(){


	int num;
	printf("Enter number:\n");
	scanf("%d",&num);
	char *src = "manish";
	char dest[20];
	mystrcpy(dest,src,num);
	puts(dest);
}
