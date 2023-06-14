#include<stdio.h>
struct Employee{
	int empid;
	float salary;
	char Ename[20];
};
void main(){

	struct Employee TCS = {1357,3534.334,"Aditya"};
	printf("%d\n",TCS.empid);
	printf("%f\n",TCS.salary);
	puts(TCS.Ename);

}
