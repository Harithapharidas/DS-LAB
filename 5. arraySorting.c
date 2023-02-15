#include<stdio.h>
int main()
{
	int n,a[10],i,j,temp;
	
	printf("***Bubble Sort***");
	printf("\nEnter the number of elements in an array : ");
	scanf("%d",&n);
	
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array created successfully!!!\n");
	printf("Resultant array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
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

}
