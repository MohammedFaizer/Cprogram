#include<stdio.h>
#include<stdlib.h>

struct lnode
{
    struct lnode* prev;
    int data;
    struct lnode* next;
};
typedef struct lnode node;
node* start=NULL;
void insertion()
{
    int val;
    node* newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL)
    {
        printf("stack is full");
    }
    else
    {
        printf("Enter the value to be inserted:");
        scanf("%d",&val);
        if (start==NULL)
        {
            start=newNode;
            newNode->prev=NULL;
            newNode->next=NULL;
            newNode->data=val;
        }
        else
        {
            node*temp=start;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
           temp->next=newNode;
           newNode->prev=temp;
           newNode->data=val;
           newNode->next=NULL;

    }
}
}
void display()
{
    node* temp=start;
    while(temp!=NULL)
    {
        printf("\n***************");
        printf("%p>>",temp->prev);
        printf("%d>>",temp->data);
        printf("%p>>",temp->next);
        printf("***************\n");
        printf("|||||||%p|||||||\n",temp);
        temp=temp->next;
    }
}

int main()
{
    int choice,val;
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    insertion();
        break;
    case 2:
    display();
        break;    
    
    default:
        break;
    }
    
 main();
}

