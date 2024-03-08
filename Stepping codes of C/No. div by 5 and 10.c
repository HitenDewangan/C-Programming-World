#include <stdio.h>
#include<stdlib.h>

int main() {
	int a;
    
	printf("Enter the number:");
	scanf("%d",&a);
 	
	 if(a%5==0 && a%10==0)
 	   printf("%d is divisible by 5 and 10",a);
	
	else
	   printf("%d is not divisible by 5 or 10",a);
}