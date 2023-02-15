#include<stdio.h>
int sumFun1(int,int);
int sumFun2();
void sumFun3(int,int);
void sumFun4();

int main()
{

	int choice;
	//loop for menu
	
	do
	{
		printf("\nEnter choice (1-4): ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("\nFunction with return type and argument\n");
				int n1,n2,res;
				printf("Enter two numbers: ");
				scanf("%d%d",&n1,&n2);
				res=sumFun1(n1,n2);
				printf("sum = %d ",res);
				
				break;
			
			case 2: printf("\nFunction with return type and no argument\n"); 
				int result;
				result=sumFun2();
				printf("Sum = %d ",result);
			
				break;
				
			case 3: printf("\nFunction with no return type and argument\n");
				int a,b;
				printf("Enter two numbers: ");
				scanf("%d%d",&a,&b);
				sumFun3(a,b);
			
				break;
			
			case 4: printf("\nFunction with no return type and no argument\n");
				sumFun4();
				break;
				
			
			default: printf("Choose a valid option (1-4)!!!"); 
		}
	}
	while(choice!=4);
		return 0;
	
	
}
int sumFun1(int n1,int n2)
{
	int n3;
	n3=n1+n2;
	return(n3);
	
}
int sumFun2()
{	
	int a,b,s;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	s=a+b;
	return(s);
}
void sumFun3(int n1,int n2)
{
int s;
s=n1+n2;
printf("Sum is %d",s);
}
void sumFun4()
{
 int a,b,c;
 printf("Enter two numbers: ");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum is  %d\n",c);
}

