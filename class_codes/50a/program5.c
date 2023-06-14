#include <stdio.h>
char* mystrlen(char* str1,char* str2){

	while(*str1 != '\0'){
	
		str1++;
	}
	while(*str2 != '\0'){
	
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return str1;
}
void main(){


	int size;
	printf("Enter array size\n");
	scanf("%d",&size);
	char arr1[size];
	char arr2[size];
	printf("Enter string 1");
	gets(arr1);
	printf("Enter string 2");
	gets(arr2);
	 mystrlen(arr1,arr2);
	printf("%s\n",mystrlen);

}
