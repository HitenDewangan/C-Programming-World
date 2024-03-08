//C program to check whether a scanned character is a vowel or not.
#include<stdio.h>
int main()
{
	char ch, cases;
	printf("Enter a chracter :");
	scanf("\n%c",&ch);
	
	cases=(ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u');
	if(cases)
	printf("%c is a VOWEL",ch);
	else
	printf("NOT a VOWEL");
	return 0;
}