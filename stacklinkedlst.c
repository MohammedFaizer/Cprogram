#include<stdio.h>
#include<stdlib.h>

struct lnode
{
    int data;
    struct lnode *next;
};

typedef struct lnode node;
node* top=NULL;
void push(int val)
{
    node* newNode=(node*)malloc(sizeof(node));
    if (top==NULL)
    {
        newNode->data=val;
        newNode->next=NULL;
        top=newNode;
    }
    else{
        newNode->data=val;
    newNode->next=top;
    top = newNode;
    }
    
}

void pop()
{

    node* temp=top;

    if(top == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Poped element = %d\n", top->data);
        temp =top;
        top=top->next;
        free(temp);
    }
}

void printList()
{
     node *temp = top;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}
void peek()
{
    if(top==NULL)
    {
        printf("nothing to peek \n");
    }
    else{
        printf("peeeking %d \n",top->data);
    }

}
void search(int sear)
{
    int count=0,index=0;
    node* temp=top;
      if(top==NULL)
      {
        printf("Nothing to searched");
      }
      else
      {
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
void main()
{
    int choice,num;
    printf("1>>push||2>>pop||3>>display||4>>peek||5>>search");
    printf("Enter Your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
     printf("Enter the value:");
     scanf("%d",&num);
     push(num);
     break;
     case 2:
     pop();
     break;
     case 3:
     printList();
     break;
     case 4:
     peek();
     break;   
     case 5:
     printf("Enter the value to be searched:");
     scanf("%d",&num);
     search(num);
     break;
     default:
     printf("Please enter a correct choice code\n");
     break;
    }
    main();
   
}