#include<stdio.h>
#include<stdlib.h>

int a[10],n,n1,n2,i,choice,count=0,k,item,pos,item2;
void creation();
void insertion();
void deletion();
void display();
int main()
{
	
	
	printf("******ARRAY OPERATIONS******");
	printf("\n1.Creation");
	printf("\n2.Insertion");
	printf("\n3.Deletion");
	printf("\n4.Display");
	
	printf("\n\nEnter number of elements in array: ");
	scanf("%d",&n);
	
	
	
	//loop for menu
	
	do
	{
		printf("\nEnter choice (1-4): ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: creation();
				break;
			
			case 2: insertion();
				break;
				
			case 3: deletion();
				break;
			
			case 4: display();
				break;
				
			case 5: break;
			default: printf("Choose a valid option (1-4)!!!"); 
		}
	}
	while(choice!=5);
		return 0;
	
	
}
void creation()
{
	printf("\n\n\n***Array Creation***\n");
	if(count==0)
	{
		printf("Enter array elements:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			
		}
		count+=1;
		//printf("Created array:");
		//diplay(n);
	}
	else
	{
		printf("Array already created");
	}	
	
}
	
void insertion()
{
	printf("\n\n***Array Insertion***\n");
	if(n==10)
	{
		printf("\nInsertion not possible!!!");
		
	}
	printf("Enter the index of new element: ");
	scanf("%d",&k);
	
	printf("Enter the element that to be inserted: ");
	scanf("%d",&item);
	
	i=n-1;
	while(i>=k)
	{
		a[i+1]=a[i];
		i=i-1;
	}
	a[k]=item;
	n=n+1;
	printf("\nElement inserted successfully!!!");

	
}

void deletion()
{
	printf("\n***Array Deletion***\n");
	printf("\nEnter the position from which element to be deleted: ");
	scanf("%d",&pos);
	item2=a[pos];
	if(pos>n+1)
	{
		printf("Deletion not possible!!!");
		
	}
	else
	{
		for(i=pos;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		n=n-1;
	}
	
	printf("****Array after deletion***\n");	
	display();
	printf("\nDeleted element is : %d",item2);
}

void display()
{
	printf("\nResultant array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
