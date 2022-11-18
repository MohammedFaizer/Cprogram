#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* top=NULL;

void push(int n)
{
   struct Node* newnode;
   newnode=(struct Node*)malloc(sizeof(struct Node));
   newnode->data=n;
   if (top==NULL)
   {
     newnode->next=NULL;
   }
   else{
    newnode->next=top;
   }
   top=newnode;
   printf("data is inserted\n");
    
}
void pop(){
    if(top==NULL)
    {
        printf("stack is underflow");
    }
    else{
        top=top->next;
    }

}

void display()
{
    if (top==NULL)
    {
        printf("stack is underflow\n");
    }
    else{
        while (top!=NULL)
        {
            printf("the values are %d\n",top->data);
            top=top->next;
        }
     
    }

}

void main(){
    int num,val;
printf("Enter the Choice \n");
scanf("%d",&num);
switch (num)
{
    case 1:
          printf("Enter the number :");
          scanf("%d",&val);
          push(val);
            break;
    case 2:
            pop();
            break;
    case 3:
           display();
           break;
}
main();
}

