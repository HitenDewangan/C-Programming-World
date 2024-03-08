#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,j;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int a[4]={1,1,2,3};
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Unique elements are: ");
    for(int i=0; i<n; i++){
        bool flag = true;
        //check if the element is present before the current index
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                flag = false; 
                break;
            }
         
        }
         if(flag == false){
         printf("%d ",a[i]);
		 break;
         }
    }
    
}