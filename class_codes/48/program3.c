/* NESTED STRUCTURE */
#include<stdio.h>
struct movieinfo{

	char Mname[20];
	int count;
	float price;
}obj2 = {"Dhamaal",5,500.00};
struct movie{
	char Mname[20];
	int count;
	//struct movieinfo obj2;

};
void main(){

	struct movie obj1 = {"DoubleDhamaal",8};
	printf("%s\n",obj1.Mname);
	printf("%d\n",obj1.count);
	printf("%s\n",obj2.Mname);
	printf("%d\n",obj2.count);
	printf("%f\n",obj2.price);
}


