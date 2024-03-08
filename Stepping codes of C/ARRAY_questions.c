//Programs thaught in class

////problem1
//#include<stdio.h>
//
//void main()
//{
//	
//	int a[5]={1,2,3,4,5};
//	a[0,1,2]=1;  // magic of comma operator
//	printf("value of 0,1,2 index:\n%d\n%d\n%d",a[0],a[1],a[2]);
//}
//-----------------------------------------------------------------------------------
////problem2
//#include<stdio.h>
//void main()
//{
//	
//	int a[5]={1,2,3,4,5};
//	a[0]=(6,7,8,9,10);
//	a[0]+=a[1]+=a[2]+=a[3];
//	printf("%d\n%d\n%d",a[0],a[1],a[2]);
//	
//}
//----------------------------------------------------------------------------------------
////problem3                                        //size of array
//#include<stdio.h>
//void main()
//{
//	char a[]={'1','2','3','4'};
//	char x=sizeof(a)/sizeof a[0];
//	printf("%d",x);
//	
//}
//==========================================================================================
////problem4                                    //reverse an array
//#include<stdio.h>
//int temp;
//void main()
//{
//	int a[5]={1,2,3,4,5};
//
//	for(int i=0,n=4;i<5;i++,n--)
//	{
//		if(i<=n)
//		{
//			
//			temp=a[i];
//			a[i]=a[n];
//			a[n]=temp;
//		}
//	}
//
//	printf("result after changes in array is:\n");
//	for(int i=0;i<5;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//}
//=============================================================================================
////problem6  different demo function of array to show how array allocates values
//#include<stdio.h>
//void main()
//{
//	arraydemo1();
//	printf("\n***********--************");
//	arraydemo2();
//	printf("\n***********--************");
//	arraydemo3();
//}
//
//void arraydemo1()
//{
//	int x=1,y=2;
//	int a[4]={x!=0,x<y,++x,x++};
//	printf("%d\n%d\n%d\n%d",a[0],a[1],a[2],a[3]);
//}
//
//void arraydemo2()
//{ 
//	int m=1,n=2;
//	int a[4]={1,2,3,4};
//	printf("\n%d\n%d\n%d",m,n,a[m+=n]); //ask this
//	
//}
//
//void arraydemo3()
//{
//	int m=1,n=2;
//	int a[]={n+=2,m+=1,m+=n};
//	printf("\n%d\n%d\n%d\n%d\n%d",a[0],a[1],a[2],m,n);
//	
//}
//=============================================================================================
////problem7 program that scan 5 elements nd then prints 5 elements
//
//#include<stdio.h>
//void main()
//{
//	int a[5];
//	printf("Enter array alements\n");
//	for(int i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//	printf("array alements are \n");
//	
//	for(int i=0;i<5;i++)
//	{
//		printf("\n%d",a[i]);
//	}
//}
//=================================================================================================
////problem8                                            //left shift all elements of aaray & and last = first
//#include<stdio.h>
//int n,i,p;
//void main()
//{
//	printf("Enter no of elements in array\n");
//    scanf("%d",&n);
//    int a[n];
//	printf("Enter array elements\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	
//     p=a[0];
//     
//	
//	for(i=0;i<n;i++)
//	{
//	 	 a[i]=a[i+1];	 
//	}
//	printf("%d",i);
//	a[i-1]=p;
//      
//	printf("final result array is:\n");
//	for(i=0;i<n;i++)
//	{
//	printf("\n%d",a[i]);
//    }
//	
//}
//========================================================================================================
////problem9 program is given range of n if value of array scanned is 1,2,3,4,5  then out be 5,1,2,3,4
//#include<stdio.h>                              //opposite of program 8
//	int n,i,p;
//void main()
//{
//     printf("Enter no of elements in array\n");
//     scanf("%d",&n);
//     int a[n];
//	printf("Enter array alements\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("\n%d",i);
//    p=a[i-1];
//    
//     
//	
//	for(i=n;i>0;i--)
//	{
//	 	 a[i]=a[i-1];	 
//	}
//	printf("\n%d\n",i);
//	a[i]=p;
//	
//	for(int i=0;i<n;i++)
//	{
//	printf("\n%d",a[i]);
//    }
//}
//==============================================================================================
////problem10 program to print even numbers in scanned array elements
//
//#include<stdio.h>
//void main()
//{
//	int n,i;
//	printf("Enter range of array elem:");
//	scanf("%d",&n);
//	int a[n];
//	printf("Enter array alements\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//		
//	}
//	for(i=0;i<n;i++)
//	{
//	  if(a[i]%2==0)
//		{
//		printf("\n%d",a[i]);	
//		}
//        	  
//	}
//
//}
//===============================================================================================
//problem11 program to check weather scanned key is present in array elements or not if yes print proper result with position if not display key scanned not present

#include<stdio.h>
void main()
{
	int a[5],i,key,flag;
	
	printf("Enter array alements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Key");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key==a[i])
		{
			
			flag=1;
			break;
		}
		
				
	}
	
	if(flag==1)
	{
		printf("Scanned key:%d is present at pos:%d",key,i);
	}
	else
	{
		printf("key is not present");
	}
}
