#include <stdio.h>
void gun();
void fun();
void main(){

	gun();
	fun();
	extern int x;
	printf("%d\n",x);

}
