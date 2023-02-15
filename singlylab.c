#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *ptr;
struct node *head;
struct node *first=NULL;
struct node *second=NULL;
struct node *third=NULL;

void creation();
void insertFirst();
void insertPos();
void display();
/*void deleteFirst(); */
int main()
{
	printf("****Linkedlist Operations****\n");
	printf("1.Creation\n");
	printf("2.Insert at begining");
	printf("3.Insert at specific postion\n");
	printf("4.display\n");
	printf("4.Insert at end\n");
	printf("5.Delete from begining\n");
	printf("6.Delete from specific postion\n");
	printf("7.Delete from end\n");
	printf("8.Searching\n");
	printf("9.Traverse\n");
	printf("10.Exit");
	
	int choice;
	
	do
	{
		printf("\n\nEnter the choice (1-6): ");
		scanf("%d",&choice);
		switch(choice) 
		{
			case 1: creation();
				 break;
				 
			case 2: insertFirst();
				 break;
				 
			case 3: insertPos(); 
				 break;
				 
			
			case 4: display();
				break;
		
			/*case 5: deleteFirst(); 
				 break;
			
			case 6: break;
				 
			
				 
			case 7: deleteEnd();
				 break;
				 
			case 8: search();
				 break;
				 
			case 9: traverse(); 
				 break;
			case 10: 
				 break;*/
			
			
			default : printf("Invalid option!!! ");
		}
	}
	while(choice!=6);
	return 0;
}
void creation()
{
	//intializing node
	
	
	
	//allocating memory
	
	first=malloc(sizeof(struct node));
	second=malloc(sizeof(struct node));
	third=malloc(sizeof(struct node));
	
	first->data=10;
	first->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=NULL;
	
	head=first;
	
	printf("Linked list created with 3 three elements!!!\n");
	printf("%d\t%d\t%d",first->data,second->data,third->data);
}

void insertFirst()
{
	printf("\n****Insertion at first****\n");
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
	}
	printf("\nElement inserted successfully!!!\n");
	
	
}
void display()
{
	printf("Linked list elements are : ");
	ptr=head;
	if(ptr==NULL)
	{
		printf("\nList is empty");
	}
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
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
     printf("List is empty");
   }
   else
    {
        ptr=head;
          head=ptr->next;
            free(ptr);
                printf(" node deleted from beggining...");
 
    }    
} 
void deleteEnd()
   {
      struct node *ptr1;
      if(head==NULL)
      {
         printf("list is empty .."):
      }
      else if(head-.next==NULL)
      {
      head==NULL;
      free(head);
      printf(" only node of list is deleted.."):
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
              printf(" Deleted node from last.."):
              }
            }  

void deletePos()
{
  struct node *ptr,
  struct node *ptr1;  
        if(head == NULL)  
        {  
            printf("\nlist is empty");  
        }  
        else if(head->next==NULL)  
        {  
            head=NULL;  
            free(head);  
            printf("\nOnly node of the list deleted ...");  
        }  
              
        else  
        {  
            ptr=head;   
            while(ptr->next!=NULL)  
                {  
                    ptr1=ptr;  
                    ptr=ptr ->next;  
                }  
                ptr1->next=NULL;  
                free(ptr);  
                printf("\n Deleted Node from the last ...");  
            }     
        }

void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr=head;   
    if(ptr==NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?:\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data==item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr=ptr->next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}
void traverse()  
    {  
        struct node *ptr;     
        ptr = head;   
        if(ptr==NULL)  
        {  
            printf("Empty list..");  
        }  
        else  
        {  
            printf("printing values . . . . .\n");   
            while (ptr!=NULL)  
            {  
                printf("\n%d",ptr->data);  
                ptr=ptr->next;  
            }  
        }  
     }
