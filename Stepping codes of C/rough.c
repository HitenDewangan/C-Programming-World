#include<stdio.h>

int main(){
//	int a=10, b=20, c;
//	c=a+b<30;
//	printf("\n%d",5<3||2<3&&5+7>3);
//	printf("\n%d",c=a+b<30 );
//	printf("\n%d",a=a+++b);
	
	int a=10, b=20;

	printf("\n%d",b=(++a)+(a--)+(--b)+(++b));
	printf("\n%d",a);
	return 0;
}