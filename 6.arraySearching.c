#include<stdio.h>
int a[20],n,choice,num,i,j,k,f,count=0,item1,item2,pos,lb,ub,mid;
void creation(int);
void linearSearch(int);
void binarySearch(int);

int main()
{
	
	
	printf("******ARRAY OPERATIONS******");
	printf("\n1.Creation");
	printf("\n2.Linear Search");
	printf("\n3.Binary Search");
	printf("\n4.Exit");
	
	printf("\n\nEnter number of elements in array: ");
	scanf("%d",&n);
	
	do
	{
		printf("\nEnter the choice (1-4) : ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1: creation(n);
				break;
			
			case 2: linearSearch(n);
				break;
				
			case 3: binarySearch(n);
				break;
			
			case 4: 
				break;
				
				
		        default: printf("Choose a valid option (1-4)!!!"); 
		}
	}
	while(choice!=4);
	return 0;
		
		
}

void creation(int n1)
{
	printf("\n***Array Creation***\n");
	if(count==0)
	{
		printf("Enter array elements: ");
		for(i=0;i<n1;i++)
		{
			scanf("%d",&a[i]);
			
		}
		count+=1;
		printf("Array created successfully!!!\n");
		//diplay(n);
	}
	else
	{
		printf("Array already created");
	}	
	
}

void linearSearch(int n2)
{
	printf("\n***Linear Search***");
	printf("\nEnter element to be searched : ");
	scanf("%d",&item1);
	
	j=0,f=0;
	while(j<=n2)
	{
		if(item1==a[j])
		{
			f=1;
			break;
		}
		else
		{
			j=j+1;
		}
	}
	if(f==1)
	{
		printf("\nSearch Successfull");
		printf("\nElement found at index a[%d]",j);	
	}
	
	else
	{
		printf("\nElement not found!!!");
	}
}
void binarySearch(int n3)
{
	int temp;
	printf("\nChecking whether existing array is sorted or not!!!");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter element to be searched : ");
	scanf("%d",&item2);
				
	pos=-1;
	lb=0,ub=n3-1;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]==item2)
		{
			pos=mid;
			break;
		}
		else if(a[mid]>item2)
		{
			ub=mid-1;
		}
		else
		{
			lb=mid+1;
		} 	
								
	}
	if(pos==-1)
	{
		printf("\nItem is not found!!!");
	}
	else
	{
		printf("\nItem is present at position a[%d]",pos);
	}
				
	
}


