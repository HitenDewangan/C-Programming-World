#include<stdio.h>

// shift last element to first and slide the elements for eg. [1,2,3,4,5] --> [5,1,2,3,4]
int main(){
	int a[5]; //= {1,2,3,4,5};
	int temp; //= a[4];
	printf("Enter an array: \n");
	
	for(int i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	temp=a[4];
	printf("\n------------------------------------------\n");
	
	for(int i=4; i-1>=0; i--){
		a[i]=a[i-1];
	}
	a[0]=temp;
	
	for(int i=0; i<=4; i++){
		printf("%d\n",a[i]);
	}
}
//////////////////////////////////////////////////////////////////////////////////
//int main(){
//	int a[5], temp, key, flag=0;
//
//	printf("Enter an array: \n");
//	
//	for(int i=0; i<5; i++){
//		scanf("%d",&a[i]);
//	}
//	printf("Enter key: ");
//	scanf("%d",&key);
//	
//	for(int i=0; i<5; i++){
//		if(key==a[i]){
//			flag=1;
//			printf("Scanned key: %d is present at position: %d ",key,i);
//			break;
//		}
//		else{
//			continue;
//		}
//	}
//	if(flag==0){
//		printf("Key is not present!!!!");
//    }
//	return 0;
//}
	
	
	
	
	
	
	
	
	
	
	