//---------------------------- STRLEN() -------------------------------------
//#include<stdio.h>
//void main(){
//	char a[] = "hiten";
//	int count = 0;
//	for(int i=0; i<100; i++){
//		if(a[i] == '\0'){
//			break;
//		}
//		else{
//			count++;
//		}
//	}
//	printf("Lenth of string is: %d",count);
//}
//-----------------------------method 2-----------------------------------------------------------
#include<stdio.h>
#include<string.h>
void main(){
	int n, len=0, i=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	char a[5];
	gets(a);
	printf("%c",a[i]);
	
//	while(a[i]!='\0'){
//		len++;
//		i++;
//	}
	for(i=0; a[i] != '\0'; i++){
			len++;
		}

	printf("Length of strings is: %d", len);
}


