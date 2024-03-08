//Write a program that scans n elements of array and as a result print elements that is greater or equal to the scanned variable by a
//#include<stdio.h>
//int main(){
//	int a[100], n, val;
//	printf("How many elements in your array? : ");
//	scanf("%d",&n);
//	printf("Enter the elements:\n");
//	
//	for(int i=1; i<=n; i++){
//		scanf("%d",&a[i]);	
//	}
//	
//	printf("Enter the value: ");
//	scanf("%d",&val);
//	
//	printf("\n-------------values >= scanned value are:----------------\n");
//	
//	for(int i=1; i<=n; i++){
//		if(a[i]>=val){
//			printf("%d\n",a[i]);	
//		}	
//	}
//	return 0;
//}
//////////////////////////////////////////////// FOR UNIQUE VALUES ///////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() {
    int a[12] = {10, 20, 30, 30, 40, 10, 10, 50, 60, 70, 10, 70, 60};
    int size = sizeof(a) / sizeof(a[0]);

    // visited flag array
    int visited[size];
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    printf("Unique elements: ");
    for (int i = 0; i < size; i++) {
        if (!visited[i]) {        
            printf("%d ", a[i]);
            visited[i] = 1;

            // Check for duplicates
            for (int j = i + 1; j < size; j++) {
                if (a[i] == a[j]) {
                    visited[j] = 1;
                }
            }
        }
    }
    printf("\n");

    return 0;
}
////////////////////////////////////////////////// FOR DUPLICATE & MULTIPLE VALUES //////////////////////////////////////////////////////////
//int main(){
//	int a[12] = {10,20,30,30,40,10,50,60,70,10,70,60};
//	int st[10] = {0,0,0,0,0,0,0,0,0,0};
//	int count;
//
//	
//	printf("Your array is: [10,20,30,30,40,10,50,60,70,10,70,60]");
//	
//	
//	printf("\n------------- duplicate values are: ----------------\n");
//
//	
//	for(int i=0; i<12; i++)     // for array a[]
//	{	count = 0;
//		count++;                 // for each element of a[], count = 1
//	
//		for(int k=0; k<10; k++){     //for array st[]       for going to here statement
//			if(a[i]==st[k]){
//				goto here;
//			}
//		}
//	
//
//		for(int j=i+1; j<12; j++){            // for comparing one element to each next element of a[]
//			if(a[i]==a[j]){					  // if elements finds any match then
//			//	printf("%d\n",a[i]);			
//				count++;				      // count = 2
//
//				for(int m=j+1; m<12; m++){
//					if(a[i]==a[m]){                 //if value is equal to any present value, add it to st[]
//						st[i+1] = a[i];
//						count++;					// and count = 3
//					
//						}
//					}
//				}
//			}	
//	here:
//		if(count>1){
//			printf("%d\n",a[i]);
//		}
//	}
//	return 0;
//}