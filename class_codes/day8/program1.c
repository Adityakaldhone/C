/* Write a code for the concept of auto storage class  */
#include<stdio.h>
void fun(){

	auto int x = 10;   // we can apply 'auto' storage class only on local variables.
	printf("%d\n",x);
}
void main(){

	fun(10);
	

}
