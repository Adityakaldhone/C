#include<stdio.h>
void main(){
	char ch = 'A';
	char *ptr = &ch;
	printf("%p\n",(ptr+'B'));
	printf("%p\n",(ptr+'c'));
}
