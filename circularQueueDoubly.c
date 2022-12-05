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
        newnode->prev=rear;
        newnode->next=front;
        printf("First Element>>>\n");
    }
    else
    {
       rear->next=newnode;
       newnode->data=val;
       newnode->prev=rear;
       rear=newnode;
       front->prev=rear;
       rear->next=front;
       printf("Element is circular>>>\n");
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
        printf("Deleted a single element\n");
    }
    else{
    node* temp=front;
    front=front->next;
    front->prev=rear;
    rear->next=front;
    free(temp);
    printf("Deleted the element succefully\n");
    }
    }
}

diplay()
{
    node* temp=front;

    
    do{
        if (temp!=NULL)
        {
            printf("\n********************\n");
    printf("|||||||%p|||||||\n",temp->prev);
    printf("|||||%d||||||\n",temp->data);
    printf("|||||%p|||||\n",temp->next);
    printf("adressof node>>%p",temp);
    printf("\n********************\n");
    temp=temp->next;
        }
        
    
    }while(temp!=front);
}

void search()
{
    int s;
    printf("Enter the number to be searched:");
    scanf("%d",&s);
    node* temp=front;
    int index=0,count=0;
    
    do{
        if (temp!=NULL)
        {
        if (temp->data==s)
        {
            printf("Item is in the %d index\n",index);
            count+=1;
        }
        index+=1;
        temp=temp->next;
        }
    }while (temp!=front);
    printf("There are %d elements in the circular queue\n",count);
    
}


void insertbefore()
{
    int val;
    int bfr;
    node* newnode=(node*)malloc(sizeof(node));
    if (newnode==NULL)
    {
        printf("Stack Overflow.\n");
    }
    else{
    
    printf("Before Which element u want to insert:");
    scanf("%d",&bfr);
    node* temp=front;
    int check=0;
    do{
        check=1;
        if (temp!=NULL)
        {
            check=0;
        if (temp->data==bfr)
        {
        printf("Enter the elements:");
        scanf("%d",&val);
           newnode->data=val;
           newnode->prev=temp->prev;
           temp->prev=newnode;
           newnode->next=temp;
           printf("Element inserted before %d ",bfr);
           check=1;
        }
        temp=temp->next;
        }
    }while (temp!=front && check==0);
}
}
void insertafter(){
    int val;
    int aftr;
    node* newnode=(node*)malloc(sizeof(node));
    if (newnode==NULL)
    {
        printf("Stack Overflow.\n");
    }
    else{
    
    printf("after Which element u want to insert:");
    scanf("%d",&aftr);
    node* temp=front;
    int check=0;
    do{
        check=1;
        if (temp!=NULL)
        {
            check=0;
        if (temp->data==aftr)
        {
        printf("Enter the elements:");
        scanf("%d",&val);
           newnode->data=val;
           newnode->next=temp->next;
           newnode->prev=temp;
           temp->next=newnode;
           printf("Element inserted after %d ",aftr);
           check=1;
        }
        temp=temp->next;
        }
    }while (temp!=front && check==0);
}
}
    

void main()
{
 int choice,num;
    printf("1>>enqueue||2>>dequeue||3>>display||4>>search||5>>insertafter||6>>insertbefore\n");
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
     insertbefore();
     break;
     case 6:
     insertafter();
     break;
     default:
     printf("Please enter a correct choice code\n");
     break;
    }
    main();
}