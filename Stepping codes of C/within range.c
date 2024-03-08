// C Program to check scanned number being within the range of 1 and 10
#include <stdio.h>
int main()
{
	int number;
	printf("\n\tEnter the value of number\n\t");
	scanf("%d",&number);
	if(number>1 && number<10)
	printf("Scanned number is within range of 1 and 10");
	printf("Not in range of 1 to 10!!!");
	return 0;
}