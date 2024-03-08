// C Program to check weather student has reached passing score
#include<stdio.h>
int main()
{
	int score,passing_marks=40;
	printf("\n\tEnter the score of a Student\n\t");
	scanf("%d",&score);
	if(score>=passing_marks)
	{
		printf("Congrats*****Student is passed");
	}
	if(score<passing_marks)
	printf("Sorry !! Student is failed better luck next time ");
	return 0;
}