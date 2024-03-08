// Program to print series of 11+22+33+......n(n not greater than 100)

#include<stdio.h>

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	if(n>=100){
		printf("Input out of Range!!!");
		return 1;
	}


	int sum = 0;
	for(int i=11; i<=n; i+=11){
		sum+=i;
	}
	printf("The sum of given series is: %d", sum);
	return 0;
}