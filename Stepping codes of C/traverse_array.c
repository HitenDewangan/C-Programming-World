////////////////////////////////////////////  ARRAY DECLARATION & TRAVERSE
//#include<stdio.h>
//void main(){
//	int a[5]={1,2,3,4,5};
//	a[1]=7;
//	a[4]=9;
//	for(int i=0; i<=5; i++){
//		printf("\n%d",a[i]);
//	}
//	return 0;
//}
///////////////////////////////////////////////////////////////////   ARRAY TRAVERSE MAX
//#include<stdio.h>
//void main(){
//	int a[6]={6,1,9,10,2,3};
//	int max=a[0];
//	
//	for(int i=0; i<=6; i++){      //i=1,2,3,4,5,6
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	printf("\nMax is : %d",max);
//	return 0;
//}
/////////////////////////////////////////////////////////////////        ARRAY SWAPPING
#include<stdio.h>
void main(){
	int a[6]={6,1,9,10,2,3};
	int swap;

	for(int i=0; i<3; i++){        //i=1,2,3,4,5,6   swap using for loop
		swap=a[i];
		a[i]=a[6-i-1];
		a[6-i-1]=swap;
	}
	
	for(int i=0; i<=5; i++){        //traverse the array
		printf("%d\t",a[i]);
	}
	

	return 0;
}





