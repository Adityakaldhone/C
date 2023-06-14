/* NESTED STRUCTURE */
#include<stdio.h>
struct movieinfo{

	char Mname[20];
	int count;
	float price;
};
struct movie{
	char Mname[20];
	int count;
	struct movieinfo obj2;

};
void main(){
	struct movie obj1 = {"DoubleDhamaal",8,{"Dhamaal",5,2000.00}};
	printf("%s\n",obj1.Mname);
	printf("%d\n",obj1.count);
	printf("%s\n",obj1.obj2.Mname);
	printf("%d\n",obj1.obj2.count);
	printf("%f\n",obj1.obj2.price);
}


