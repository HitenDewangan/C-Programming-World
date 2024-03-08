//Program to check whether a given number is divisible of 3.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("\n%d",&num);
	
	if(num%3==0)
	printf("%d is divisible by 3",num);
	else
	printf("NOT divisible by 3");
	return 0;
}