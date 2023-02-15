#include<stdio.h>
#include<stdlib.h>
#define N 10
int stack[N],choice,top=-1,i;
void push();
void pop();
void display();
int main()
{
	
	
	printf("******STACK OPERATIONS******");
	printf("\n1.Push");
	printf("\n2.Pop");
	printf("\n3.Display");
	printf("\n4.Exit");
	
	//printf("\n\nEnter number of elements in array: ");
	//scanf("%d",&n);
	
	
	
	//loop for menu
	
	do
	{
		printf("\n\nEnter choice (1-4): ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: push();
				break;
			
			case 2: pop();
				break;
				
			case 3: display();
				break;
				
			case 4: break;
				
			default: printf("Choose a valid option (1-4)!!!"); 
		}
	}
	while(choice!=4);
	return 0;
	
	
}

void push()
{
	//top=-1;
	int x;
	if(top==N-1)
	{
		printf("Stack Overflow");
		exit(0);
	}
	else
	{
		printf("Value to be pushed: ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
	display();
	
	
}

void pop()
{
	if(top<=-1)
	{
		printf("Stack Underflow!!!");
		exit(0);
	}
	else
	{
		printf("Popped element is : %d",stack[top]);
		top--;
	}
}	
void display()
{
	if(top>=0)
	{
		printf("Elements in stack : ");
		for(i=top;i>=0;--i)
		{
			printf("%d ",stack[i]);
		}
	}
	else
			printf("Stack is empty!!!");
}
	
	


