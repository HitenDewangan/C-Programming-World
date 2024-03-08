#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter first num A: ");
  scanf("%d",&a);
   
  printf("\nEnter second num B: ");
  scanf("%d",&b);
  
  c=(a*a)+2*a*b+(b*b);
  printf("\nAnswer is: (A+B)^2= %d",c);
   


}