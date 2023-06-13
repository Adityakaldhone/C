/* character array or string*/
#include<stdio.h>
void main(){
	char carr[] = {'c','o','r','e','2','w','e','b','\0'};
	char *str = " core2web";
	printf("%s\n",carr);
	printf("%s\n",str);
	carr[4] = '3';
	*str = '3';
	printf("%s\n",carr);
