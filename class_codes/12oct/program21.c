#include<stdio.h>
void main(){
int size;
int sum=0;
printf("Enter size of an array\n");
scanf("%d",&size);
int arr[size];
printf("Enter array elements\n");
for( int i=0;i<size;i++){
	scanf("%d",&arr[i]);
}
for(int j=0;j<size;j++){
     sum = sum + arr[j];
}
printf("%d\n",sum);
}
