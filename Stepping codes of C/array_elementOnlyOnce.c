#include<stdio.h>
int main(){
	int arr[8] = {10,20,30,40,30,10,20};
	int len = sizeof(arr)/sizeof(arr[0]); 				//valid only if an element occurs twice
	for(int i=0; i<len; i++){							//for thrice and so on, it doesn't work
		for(int j=i+1; j<len;j++){
			if(arr[i] == arr[j]){
				printf("%d\n", arr[i]);
			}
		}
	}
}