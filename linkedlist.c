#include<stdio.h>
#include<stdlib.h>

struct lnode
{
    int data;
    struct lnode* next;
};
typedef struct lnode node;
node* start=NULL;
void insertatbegining(int n)
{
    node* newNode=(node*)malloc(sizeof(node));
  if (start==NULL)
  {
    newNode->data=n;
    newNode->next=NULL;
    start=newNode;
    printf("value is inserted and it is the first element.\n");
  }
  else{
    newNode->data=n;
    newNode->next=start;
    start=newNode;
    printf("value is inserted .\n");
  }
  
}
void insertatend(int n)
{
  node* temp=start;
  node* newNode=(node*)malloc(sizeof(node));
  if(temp==NULL)
  {
    newNode->data=n;
    newNode->next=NULL;
    start=newNode;
    printf("there is no end node so inserted as afirst node\n");
  }
  else{
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=newNode;
  newNode->data=n;
  newNode->next=NULL;
}
}
void insertatposition(int n,int p)
{
  node* temp=start;
  node* newNode=(node*)malloc(sizeof(node));
 if ((p==1)&&(temp!=NULL))
 {
    newNode->data=n;
    newNode->next=start;
    start=newNode;
    printf("value is inserted and it is the first element.\n");
 }
 else{
    for (int i = 1; i < p-1; i++)
    {
        temp=temp->next;
    }
    if (temp!=NULL)
    {
        newNode->next=temp->next;
        newNode->data=n;
        temp->next=newNode;
         printf("value is inserted .\n");
    }
    else
    {
        printf("Sorry desired position is nothere in your list\n");
    }
    
 }
 
}
void display()
{
     node *temp = start;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
}
void pop()
{
     node* temp=start;

    if(start == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Poped element = %d\n", start->data);
        temp =start;
        start=start->next;
        free(temp);
    }
}
void popatlocation(int p)
{
  node* temp=start;
  node* temp2;
 if ((p==1)&&(temp!=NULL))
 {
  pop();
 }
 else{
    for (int i = 1; i < p-1; i++)
    {
        temp=temp->next;
    }
    if (temp!=NULL)
    {
      temp2=temp->next;
      temp->next=temp2->next;
      free(temp2);
       printf("value is deleted .\n");
    }
    else
    {
        printf("Sorry desired position is nothere in your list\n");
    }
    
 }
 
}
void main()
{
    int choice,val,pos;
    printf("\nEnter your Choice :");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
          printf("Enter the value to be inserted:");
          scanf("%d",&val);
          insertatbegining(val);
          break;
      case 2:
          printf("Enter the value to be inserted:");
          scanf("%d",&val);
          printf("\nEnter the Position to be inserted:");
          scanf("%d",&pos);
          insertatposition(val,pos);
          break;
       case 3:
          printf("Enter the value to be inserted:");
          scanf("%d",&val);
          insertatend(val);
          break;  
        case 4:
           pop();
        break;  
         case 6:
          printf("\nEnter the Position to be deleted:");
            scanf("%d",&pos);
           popatlocation(pos);
        break;
        case 5:
             display();
             break;  
    }
    main();
}