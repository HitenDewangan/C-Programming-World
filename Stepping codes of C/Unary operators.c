#include<stdio.h>
//#define a 10*10
const int a=10;  //global variable                //when use const, variable becomes read only

//void p(int i,int j){
// 	i=m,j=s;                  //int can't redeclare      //m not declared
//	printf("%d%d",i,j);
//}

int main(){
	int x=1;
	a=20;         //updating the value of global "a"                //assignment of read-only variable 'a'
	printf("%d\t%d\t%d",x++,++x,a=a+1);
////	printf("\n%d\t%d",x++,x);
//}
//	int a=2,b=3;
//	if(a+=1
//		printf("%d,%d",a-=b,b-=a);
//	printf("\n------------------------------------------------------------");
//	int y=20;
//	if(a){
//		int k=a/y;
//		printf("\n%d",k);
//	}
//	printf("\n------------------------------------------------------------");
//	
//	int n=4;
//	printf("\n%d",n%2);
	
	printf("\n------------------------------------------------------------");
	
	
//	int m=2,s=3
//	p(m,n);
}














