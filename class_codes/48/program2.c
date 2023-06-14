/* ARRAY OF STRUCTURE  */
#include<stdio.h>
struct movie{

	char Mname[20];
	int count;
	float price;

};
void main(){

	struct movie obj1 = {"Tumbad",5,1000.00};
	struct movie obj2 = {"Welcome back",8,2000.00};
	struct movie obj3 = {"phir hera pheri",6,3000.00};
	struct movie arr[] = {obj1,obj2,obj3};
	for(int i=0;i<3;i++){
	
		printf("%s\n",arr[i].Mname);
		printf("%d\n",arr[i].count);
		printf("%f\n",arr[i].price);
	}

}
