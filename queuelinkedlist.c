#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node*next;  
};  
struct node *front;  
struct node *rear;   
void insert();  
void delete();  
void display();  
void search();
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n1.enqueue>>2.Dequeue>>3.Display>>4.Exit>>5.seach");  
        printf("\nEnter your choice :");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);
            case 5:
            search();
            break;  
            default:   
            printf("\nEnter valid choice\n");  
        }  
    }  
}  
void search()
{
    int count=0,index=0;
   struct node* temp=front;
   int sear;
      if(front==NULL)
      {
        printf("Nothing to searched");
      }
      else
      {
        printf("Enter the elements to be searched:");
        scanf("%d",&sear);
        while (temp!=NULL)
        {
            index+=1;
            if (temp->data==sear)
            {
                printf("item in [%d]index\n",index);
                count+=1;
            }
            temp=temp->next;
            
        }
        printf("There are %d in list\n",count);
      }
}
void insert()  
{  
    struct node *newnode;  
    int val;   
      
    newnode = (struct node *) malloc (sizeof(struct node));  
    if(newnode == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value:\n");  
        scanf("%d",&val);  
        newnode -> data = val;  
        if(front == NULL)  
        {  
            front = newnode;  
            rear = newnode;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = newnode;  
            rear = newnode;  
            rear->next = NULL;  
        }  
    }  
}     
void delete ()  
{  
    struct node *temp;  
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
        temp = front;  
        front = front -> next;  
        free(temp);  
    }  
}  
void display()  
{  
    struct node *temp;  
    temp = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        while(temp != NULL)   
        {  
            printf("%d->",temp -> data);  
            temp = temp -> next;  
        }  
    }  
} 