///////////////////////////////////////////////////////////// STRING INITIALISATION AND ACCESSING ////////////////////////////////////////////////////////////
//#include<stdio.h>
//int main(){
//	char vowels[] = {'a','e','i','o','u','\0','\0','k'};
//	char name[] = "hiten dewangan";
//	
//	int len1 = sizeof(vowels)/sizeof(vowels[0]);
//	int len2 = sizeof(name)/sizeof(name[0]);
//	
//	printf("lenth of vowels is: %d\n",len1);
//	printf("lenth of name is: %d\n",len2);
//	
//	for(int i=0; i<len1; i++){            //when accessing elements using for loop, it will print all values including values after null character('\0')
//		printf("%c ",vowels[i]);
//	}
//	printf("\n");
//	for(int i=0; i<len2; i++){
//		printf("%c \n",name[i]);
//	}
//	printf("%s\n",vowels);      //when accessing elements using for printf(), it will not print after null character('\0')
//	printf("%s",name);
////}
//
//////////////////////////////////////////////////////////// STRING IN-BUILT FUNCTIONS //////////////////////////////////////////////////////////////////////
//  	printf("\n---------------------- strlen() ------------------------------");
//	printf("\ncharacters in vowels: %d",strlen(vowels));
//	printf("\ncharacters in name: %d",strlen(name));
//	printf("\n---------------------- sizeof() ------------------------------");
//	printf("\nsize of vowels: %d",sizeof(vowels));
//	printf("\nsize of name: %d",sizeof(name));	
//}
///////////////////////////////////////////////// strcmp() ///////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countLength(char arr[]);

void main(){
//    char B = 'B';
//    char a[] = "abhijithPWIOI";
//    char b[] = "abhijithpwioi";
//    char cm1[] = "abhijith123";
//    char cm2[] = "HHH";
//    printf("%d",strcmp(a,b));  // A - B
//    printf("\n%d",strcmp(b,a));   // B - A
//    printf("\n%d",strcmp(cm1,cm2));
//===================================================================    
	char x[5]="joker";
	char y[10] = "kaltaana";
	
	strcpy(y,x);
	printf("\n%s",y);
	
	printf("\nlen of y: %d", strlen(y));


}
