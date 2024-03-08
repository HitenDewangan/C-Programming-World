//Function to Cac area of square
#include<stdio.h>

int square();

float main(){
	printf("Going to calc. the area of the square\n");
	float area = square();
	printf("\nThe area outside function: %f\n", area);
	printf("");
}

int square()
{
	float side;
	printf("Enter the side of square:");
	scanf("%f", &side);
	float a = side*side;
	printf("Area inside function: %f", a);
	return a;
}