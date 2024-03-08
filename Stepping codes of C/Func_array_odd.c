#include<stdio.h>

int odd(int arr[], int len){
    int count = 0;
    for(int i=0; i<len; i++){
        if(arr[i]%2!=0){
            count++;
            printf("%d\t",arr[i]);
        }
        else{
            printf("No odd no.");
        }
    }
    return 0;
}

int main(){
    int arr[] = {2,3,56,7,79,5,9,91,77,34,22,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    int s = odd(int arr[], int len);
    

    return 0;
}