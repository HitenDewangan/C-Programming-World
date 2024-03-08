#include<stdio.h>
int main(){
	int c;
	for(;;){
	//	printf("\nEnter an Alphabet:");
		c=getchar();
			if(c==EOF)
				break;
			if((c>='a') && (c<='z'))
				c+='A'-'a';
		putchar(c);
	}
	
}