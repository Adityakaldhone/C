#include<stdio.h>
struct Demo{

	float f;
	char *ch1;//derived datatype
	int x;
	int y;
};
void main(){

	printf("%ld\n",sizeof(struct Demo));
}
