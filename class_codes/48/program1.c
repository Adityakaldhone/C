/* POINTR TO A STRUCTURE/STRUCTURE POINTER*/
#include<stdio.h>
struct movie{

	char Mname[20];
	int count;
	float price;
}obj1 = {"Tumbad",5,1000.00};
void main(){

	struct movie *sptr = &obj1;
	printf("%s\n",obj1.Mname);
	printf("%d\n",obj1.count);
	printf("%f\n",obj1.price);
	printf("%s\n",(*sptr).Mname);
	printf("%d\n",(*sptr).count);
	printf("%f\n",(*sptr).price);
}
