#include <stdio.h>
int main()
{
    int a, b, add, sub, mul,mod;
    float div;
    
    printf("Enter two integers\n");
    scanf("%d%d", &a, &b);
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / (float)b;  //typecasting      float is used to get exact quotient eg: 0.67
	mod = a % b; 
    printf("\nSum = %d",add);
    printf("\nDifference = %d",sub);
    printf("\nMultiplication = %d",mul);
    printf("\nDivision = %.2f",div);
    printf("\nModulus = %d",mod);
    return 0;
}