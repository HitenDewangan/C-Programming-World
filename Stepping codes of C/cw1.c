//Program to print sum of 111+211+311+...n
#include<stdio.h>

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	if(n>=1000){
		printf("Input out of Range!!!");
		return 1;
	}


	int sum = 0;
	for(int i=111; i<=n; i+=100){
		sum+=i;
	}
	printf("The sum of given series is: %d", sum);
	return 0;
}