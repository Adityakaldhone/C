/* NESTED STRUCTURE 1ST WAY */
#include<stdio.h>
struct movieleadrole{

	char actorname[20];
	char actressname[20];
};
struct movierating{
	float movierating;
	struct movieleadrole obj4;
}static obj3 = {9.7};
// static struct movierating obj5 = {9.7};
struct movieinfo{

	char Mname[20];
	int count;
	float price;
	struct movierating obj3;
};
struct movie{
	char Mname[20];
	int count;
	struct movieinfo obj2;

};
void main(){
	struct movie obj1 = {"DoubleDhamaal",8,{"Dhamaal",5,2000.00,{9.8,{"Shahrukh","Dipika"}}}};
	printf("%s\n",obj1.Mname);
	printf("%d\n",obj1.count);
	printf("%s\n",obj1.obj2.Mname);
	printf("%d\n",obj1.obj2.count);
	printf("%f\n",obj1.obj2.price);
	printf("%f\n",obj1.obj2.obj3.movierating);
	printf("%s\n",obj1.obj2.obj3.obj4.actorname);
	printf("%s\n",obj1.obj2.obj3.obj4.actressname);
	
}


