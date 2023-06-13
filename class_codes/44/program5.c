/* local static variable*/
#include <stdio.h>
void fun();
void main(){
	static int y = 10;
	++y;
	printf("%d\n",y);
}
void fun(){

	fun();
}

