#include <stdio.h>
int main(){
	int a;
	printf("Enter thevalue of a:");
	scanf("%d",&a);
	
	if (a>1 && a>0){
		printf("%d is greater than 1 and 0\n",a);
	}
	if(a<=1){
		printf("Invalid Input");
    }
	
}