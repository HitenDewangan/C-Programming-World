#include <stdio.h>
#include<stdlib.h>

int main() {
	int a;
	char g;
    
	printf("Enter the gender");
	scanf("%c",&g);
 	if((g!='m'&&g!='M')&&(g!='f'&&g!='F')&&(g!='T'&&g!='t'))
	{
       	printf("invalid gender");
       	exit(1);
	}
	printf("\nEnter the age");
	scanf("%d",&a);
   
 
	if((g=='m'||g=='M'||g=='f'||g=='F'||g=='T'||g=='t')&&a>=18)
	{
	printf("\nThe gender is :%c and age is %d,\n\nEligible to vote",g,a);
	}
	if((g=='m'||g=='M'||g=='f'||g=='F'||g=='T'||g=='t')&&a<=18)
	{
	printf("The gender is :%c and age is %d,\nBut not Eligible to vote",g,a);
	}
    
}
