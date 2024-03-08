#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Unique elements are: ");
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=i+1; j<n; j++){
            if(a[i] == a[j]){
                flag =true;
            }
        }
        if(flag == false)
            printf("%d",a[i]);
    }
}