/*C program to check whether scanned character is in between a and f for both capital and
small letters.*/
#include <stdio.h>
int main()
{
	char character;
	printf("Enter the single character\n\t");
	scanf("%c",&character);
	if((character>='A'&& character<='F')||(character>='a' && character<='f'))
	printf("single character scanned is within range");
	if((character>'F' || character>'f'))
	printf("Sorry! single character scanned is out of range");
	return 0;
}