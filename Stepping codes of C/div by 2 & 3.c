#include <stdio.h>
#include<stdlib.h>

int main() {
	int a;
    
	printf("Enter the number:");
	scanf("%d",&a);
 	
	 if(a%2==0 && a%3==0)
 	   printf("%d is divisible by 2 and 3",a);
	
	else
	   printf("I have to practice more");
}