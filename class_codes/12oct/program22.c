#include<stdio.h>
void main(){
int size;
int num = 0;
printf("Enter the size of an array\n");
scanf("%d",&size);
int arr[size];
printf("Enter array elements");
for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
}
for(int j=0;j<size;j++){
	if(num < arr[j]){
	num =arr[j];

	}
	num>arr[j];
}
printf("%d",num );
}
