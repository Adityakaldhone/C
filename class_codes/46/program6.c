/* Assiging value to structure/Structure assignment */
#include<stdio.h>
struct cricplayer{

	char pname[20];
	int jerno;
	float avg;
};

void main(){

	struct cricplayer obj1 = {"MSDHONI",7,99.99};
	puts(obj1.pname);
	printf("%d\n",obj1.jerno);
	printf("%f\n",obj1.avg);
}
