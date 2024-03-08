#include <stdio.h>
int main(){
	char a;
	int b;
	
    printf("Enter your gender(m/f/t):\n");
	scanf("%c",&a);                                 
	
	printf("Enter your age:\n");
	scanf("%d",&b);
	
	if (b>=18 && (a=="m"||a=="f"||a=="t"))
	{
		printf("You can vote :)");
	}
		
		
	else 
	{
		printf("\nYou can't vote :(");
	}
}