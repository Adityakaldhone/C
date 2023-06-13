/* code using our mystrcpy(string copy)function*/
#include <stdio.h>
char* mystrcpy(char* dest,char* src,int num){

	while(*src!='\0' && num!=0){
		*dest = *src;
		dest++;
		src++;
		num--;
	}
	*dest = '\0';
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
