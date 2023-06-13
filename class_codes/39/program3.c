#include<stdio.h>
void fun(int x,int y,int *ptr,int *ptr1){
	*ptr = x + y;
	*ptr1 = x - y;
}
void main(){
	int x = 10;
	int y = 20;
	int add;
	int sub;
	fun(10,20,&add,&sub);
	printf("%d\n",add);
	printf("%d\n",sub);


}
