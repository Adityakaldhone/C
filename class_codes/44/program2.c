/* static storage classes
 * 1. local variable*/
#include <stdio.h>
void fun(int x){

	printf("%d\n",x);
	int y=10;
	++y;
	printf("%d\n",y);
}
void main(){

	fun(10);
	fun(10);
	fun(10);
}
