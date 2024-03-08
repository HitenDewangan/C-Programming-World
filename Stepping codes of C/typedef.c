#include<stdio.h>

void main(){
	
	typedef int var;
	var x=10;
	
	void disp(var a)
{
	printf("%d", a);
}
disp(x);

}

void disp(var a) {         //error because scope is to the main block only
	printf("%d", a);
}