#include<iostream>
using namespace std;
main(){
setlocale(LC_ALL,"English");
int num1,num2,num3;
double average;
printf("Enter the 1st number:");
scanf("%d",&num1);
printf("Enter the 2nd number:");
scanf("%d",&num2);
printf("Enter the 3rd number:");
scanf("%d",&num3);
average=double(num1 + num2 + num3)/3;
printf("Average of 3 numbers entered:%lf",average);
	
	
}
