#include<stdio.h>
#define N 50
int Q[N],rear=-1,front=-1,count=0,i;
void cq_enqueue();
void cq_dequeue();
void display();

int main()
{
    int choice;
    printf("******CIRCULAR QUEUE OPERATIONS******");
	printf("\n1.Enqueue");
	printf("\n2.Dequeue");
	printf("\n3.Display");
	printf("\n4.Exit");
	

	do
	{
		printf("\n\nEnter choice (1-4): ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: cq_enqueue();
				break;
			
		    	case 2: cq_dequeue();
				break;
				
			case 3: display();
				break;
			
			case 4: printf("\nExit"); 
				break;
				
			default: printf("Choose a valid option (1-3)!!!"); 
		}
	}
	while(choice!=4);
	return 0;
}
void cq_enqueue()
{
    int item1;
    if(count==N-1)
    {
        printf("Overflow!! Insertion not possible");
    }
    
    else
    {
        printf("Enter element that to be inserted into a queue: ");
        scanf("%d",&item1);
        Q[rear]=item1;
        rear=(rear+1)%N;
        count=count+1;
           //printf("\nRear = %d",rear);
        
        printf("Element inserted successfully");
        
    }
    
}

void cq_dequeue()
{
    int item2;
    if(count==0)
    {
        printf("Queue is empty!!!");
        
    }
    else
    {
    	item2=Q[front];
    	front=(front+1)%N;
    	count=count+-1;
    	
    }
   
    printf("Deleted element is : %d",item2);
    //display();
}
void display()
{
    printf("Queue is : ");
    for(i=front;i<=rear-1;i++)
    {
        printf("%d ",Q[i]);
    }
}
