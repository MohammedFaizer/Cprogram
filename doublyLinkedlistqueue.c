#include<stdio.h>
#include<stdlib.h>

struct dnode
{
    struct dnode* prev;
    int data;
    struct dnode* next;
};
typedef struct dnode node;
node* front=NULL;
node* rear=NULL;
enqeue()
{
    int val;
    node* newnode=(node*)malloc(sizeof(node));
    if (newnode==NULL)
    {
        printf("Stack Overflow.\n");
    }
    else{
    printf("Enter the elements:");
    scanf("%d",&val);
    if (front==NULL)
    {
        newnode->data=val;
        front=newnode;
        rear=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
        printf("First Element>>>\n");
    }
    else
    {
       rear->next=newnode;
       newnode->data=val;
       newnode->prev=rear;
       rear=newnode;
       rear->next=NULL;
       printf("Element >>>\n");
    }
    }       
}

deqeue()
{
    if (front==NULL)
    {
        printf("No elements\n");
    }
    else{
    if (rear==front)
    {
        free(front);
        front=NULL;
        rear=NULL;
    }
    else{
    node* temp=front;
    front=front->next;
    front->prev=NULL;
    free(temp);
    }
    }
}

diplay()
{
    node* temp=front;

    while(temp!=NULL)
    {
    printf("\n********************\n");
    printf("|||||||%p|||||||\n",temp->prev);
    printf("|||||%d||||||\n",temp->data);
    printf("|||||%p|||||\n",temp->next);
    printf("adressof node>>%p",temp);
    printf("\n********************\n");
    temp=temp->next;
    }
}

void search()
{
    int s;
    printf("Enter the number to be searched:");
    scanf("%d",&s);
    node* temp=front;
    int index=0,count=0;
    while (temp!=NULL)
    {
        
        if (temp->data==s)
        {
            printf("Item is in the %d index\n",index);
            count+=1;
        }
        index+=1;
        temp=temp->next;
    }
    printf("There are %d elements in the queue\n",count);
    
}

void peek()
{
    if (front!=NULL)
    {
        printf("peeked element is %d \n",front->data);

    }
    else{
        printf("Nothing to peek");
    }
    
    
}
void main()
{
 int choice,num;
    printf("1>>enqueue||2>>dequeue||3>>display||4>>search||5>>peek\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
     enqeue();
     break;
     case 2:
     deqeue();
     break;
     case 3:
     diplay();
     break;
     case 4:
     search();
     break;   
     case 5:
     peek();
     break;
     default:
     printf("Please enter a correct choice code\n");
     break;
    }
    main();
}