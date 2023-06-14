#include<stdio.h>
struct movie{

	char Mname[20];
	int Mtick;
	float Mprice;

} obj2 = {"kantara",2,300.00};
void fun(){

	struct movie obj3 = {"Tigermelaahe",7,1250.00};
	printf("%s\n",obj3.Mname);
	printf("%d\n",obj3.Mtick);
	printf("%f\n",obj3.Mprice);
}
void main(){

	struct movie obj1 = {"drishyam2",2,300.00};
	printf("%s\n",obj1.Mname);
	printf("%d\n",obj1.Mtick);
	printf("%f\n",obj1.Mprice);
	printf("%s\n",obj2.Mname);
	printf("%d\n",obj2.Mtick);
	printf("%f\n",obj2.Mprice);

	
}
