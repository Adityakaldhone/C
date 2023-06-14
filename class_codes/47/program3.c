#include<stdio.h>
#include<stdlib.h>
struct picnic{

	char location[20];
	int count;
	float distance;
};
char* mystrcpy(char dest[],char *src){

	while(*src !='\0'){
	
	
		*dest = *src;
		src++;
		dest++;
	}
	dest = "\0";
	return dest;
}
void main(){
struct picnic obj1 = {"Goa",5,450.60};
struct picnic obj2;
mystrcpy(obj2.location,"kashmir");
obj2.count = 2;
obj2.distance = 460.50;
printf("%s\n",obj1.location);
printf("%d\n",obj1.count);
printf("%f\n",obj1.distance);

printf("%s\n",obj2.location);
printf("%d\n",obj2.count);
printf("%f\n",obj2.distance);
	
}

