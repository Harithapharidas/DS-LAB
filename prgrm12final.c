#include<stdio.h>
#include<stdlib.h>
int flag=0;
struct node
{
	int data;
	struct node *prev;
	struct node *next;
	
};
struct node *ptr;
struct node *ptr1;
struct node *head;
struct node *first=NULL;
struct node *second=NULL;
struct node *third=NULL;

void creation();
void insertFirst();
void insertPos();
void deleteFirst(); 
void deleteEnd();
void searching();
void display();


int main()
{
    int choice;
    printf("****Linkedlist Operations****\n");
	printf("1.Creation\n");
	printf("2.Insert at begining\n");
	printf("3.Insert at specific postion\n");
	printf("4.Delete from begining\n");
	printf("5.Delete from end\n");
	printf("6.Searching\n");
	printf("7.Traversal (Display)\n");
	printf("8.Exit");
	
	do
	{
		printf("\n\nEnter the choice (1-8): ");
		scanf("%d",&choice);
		switch(choice) 
		{
			case 1: creation();
				 break;
				 
			case 2: insertFirst();
				 break;
				 
			case 3: insertPos(); 
				 break;
				 
		
			case 4: deleteFirst(); 
				 break;
			
			case 5: deleteEnd();
				break;
				 
				 
			case 6: searching();
				 break;
				 
			case 7: display();
				 break;
				 
					
			case 8: printf("\nExit");
				break;
			
			
			default : printf("Invalid option!!! ");
		}
	}
	while(choice!=8);
	return 0;
}

void creation()
{
	
	if(flag==0)
	{	
		
		//intializing node
		int x1,x2,x3;
		printf("\nEnter 3 elements: ");
		scanf("%d%d%d",&x1,&x2,&x3);
		//allocating memory
		
		first=malloc(sizeof(struct node));
		second=malloc(sizeof(struct node));
		third=malloc(sizeof(struct node));
		
		first->prev=NULL;
		first->data=x1;
		first->next=second;
		
		second->prev=first;
		second->data=x2;
		second->next=third;
		
		third->prev=second;
		third->data=x3;
		third->next=NULL;
		
		head=first;
		flag=1;
		
		printf("Linked list created with 3 three elements!!!\n");
		printf("%d\t%d\t%d",first->data,second->data,third->data);
	}
	else
	{
		printf("Linkedlist is already created!!!\n");
	}
	
	

}
void insertFirst()
{
	printf("\n****Insertion at begining****\n");
	int item1;
	struct node *temp;
	temp=malloc(sizeof(struct node));
	printf("\nEnter element to be inserted: ");
	scanf("%d",&item1);
	temp->data=item1;
	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
	}
	else
	{
		
		temp->next=first;
		head=temp;
		temp->prev=NULL;
		first->prev=temp;
	}
	printf("\nElement inserted successfully!!!\n");
	
		
}
void insertPos()
{
	printf("\n****Insertion at specific location****\n");
	int item2,key;
	struct node *temp2;
	temp2=malloc(sizeof(struct node));
	printf("\nEnter element to be inserted: ");
	scanf("%d",&item2);
	printf("\nEnter element after which new element to be inserted: ");
	scanf("%d",&key);
	temp2->data=item2;
	
	if(head==NULL)
	{
		temp2->next=NULL;
		head=temp2;
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			if(ptr->data==key)
			{
				temp2->next=ptr->next;
				ptr->next=temp2;
				temp2->prev=ptr;
				printf("\nElement inserted successfully!!!\n");	
				break;
			}
			else
			{
				ptr=ptr->next;
			}
		}
		
		
	}

}
void deleteFirst()
{
    if(head==NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        ptr=head;
        head=head->next;
        head->next->prev=NULL;
        free(ptr);
        printf("\nElement deleted successfully\n");
        
        
    }
}

void deleteEnd()
{
    if(head==NULL)
    {
        printf("\nUnderflow");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=NULL;
        free(ptr);
        printf("Element deleted successfully\n");
        
    }
}
void searching()
{
    int val,flag=0;
    printf("\nEnter value to search: ");
    scanf("%d",&val);
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==val)
        {
            flag=1;
            printf("\nElement found");
            break;
        }
        else
        {
            ptr=ptr->next;
        }
    }
    if(flag==0)
		printf("Item not found!!!");
}
void display()
{
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nList empty");
    }
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    
}

