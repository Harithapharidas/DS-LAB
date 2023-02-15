#include<stdio.h>
int a[10][10],b[10][10],c[20][20],choice;
int r1,c1,i,j,k,count=1;

void creation();
void addition();
void subtraction();
void multiplication();

int main()
{
	
	printf("******MATRIX OPERATIONS******");
	printf("\n1.Creation");
	printf("\n2.Addition");
	printf("\n3.Subtraction");
	printf("\n4.Multiplication");
	printf("\n5.Exit");
	

	do
	{
		printf("\nEnter the choice (1-5) : ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1: creation();
				break;
			
			case 2: addition();
				break;
				
			case 3: subtraction();
				break;
			
			case 4: multiplication();
				break;
			
			case 5: printf("\nExit");
				break;
				
				
		        default: printf("Choose a valid option (1-5)!!!"); 
		}
	}
	while(choice!=5);
	return 0;

}

void creation()
{
	if(count==1)
	{
		printf("\nEnter number of rows : ");
		scanf("%d",&r1);
		printf("\nEnter number of columns : ");
		scanf("%d",&c1);
		
		printf("\nMatrix A");
		printf("\nEnter elements : \n");
		for(i=0;i<r1;i++)
		{	
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);	
			}
		}
		printf("\nMatrix B");
		
		printf("\nEnter elements : \n");
		for(i=0;i<r1;i++)
		{	
			for(j=0;j<c1;j++)
			{
				scanf("%d",&b[i][j]);	
			}
		}
		printf("\nMatrix A and B created successfully!!!!");
		printf("\nMatrix A\n");
		for(i=0;i<r1;i++)
		{	
			for(j=0;j<c1;j++)
			{
				printf("%d\t",a[i][j]);	
			}
			printf("\n");
		}
		printf("\nMatrix B\n");
		for(i=0;i<r1;i++)
		{	
			for(j=0;j<c1;j++)
			{
				printf("%d\t",b[i][j]);	
			}
			printf("\n");
		}
		count+=1;
			
	}
	else
	{
		printf("\nMatrix already created\n");
	}
	
}
void addition()
{
	printf("\n***Matrix After Addition***\n");
	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];	
		}
	}
	
	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
void subtraction()
{
	printf("\n***Matrix After Subtraction***\n");
	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]-b[i][j];	
		}
	}
	
	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

void multiplication()
{
	printf("\n***Matrix Multiplication***\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
			
		}
	}
	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}


