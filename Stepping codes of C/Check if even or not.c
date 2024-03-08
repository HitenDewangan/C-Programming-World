//Program to check whether a given number is even number.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("\n%d",&num);
	
	if(num%2==0)
	printf("%d is EVEN",num);
	else
	printf("ODD");
	return 0;
}