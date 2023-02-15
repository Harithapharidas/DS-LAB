#include<stdio.h>
#define N 50
int Q[N],rear=-1,front=-1,i,item;
void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    printf("******QUEUE OPERATIONS******");
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
			case 1: enqueue();
				break;
			
		    	case 2: dequeue();
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
void enqueue()
{
   
    if(rear==N-1)
    {
        printf("Overflow!! Insertion not possible");
    }
    
    else
    {
        if(front==-1 && rear==-1)
           front=0;
        printf("Enter element that to be inserted into a queue: ");
        scanf("%d",&item);
        rear=rear+1;
        Q[rear]=item;
        printf("Element inserted successfully");
        
    }
   
    
}

void dequeue()
{
  
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty!!!");
        
    }
    else
    {
        item=Q[front];
    }
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=front+1;
    }
    printf("Element deleted successfully from queue!!!");
    printf("\nDeleted element is : %d",item);
    //display();
}

void display()
{
    printf("Queue is : ");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",Q[i]);
    }
}
