#include<stdio.h>
#define size 10
int stack[size],top=-1;
void pop()
{
    if (top==-1)
    {
        printf("stack is empty not possible for pop\n");
    }
    else{
        top--;
        printf("the element in the top is poped\n");
    }
}
void push(int n)
{
  if (top==size-1)
  {
    printf("Stack is full\n");
  }
  else{
    top++;
    stack[top]=n;
    printf("value is inserted\n");
  }
  
  
}
void show()
{
    if (top==-1)
    {
        printf("nothing to display\n");
    }
    else{
for (int i = 0; i <= top; i++)
{
    printf("the values are:%d\n",stack[i]);
}
    }
}

void peek()
{
    if (top==-1)
    {
        printf("Nothing to peek\n");
    }
    else{
        printf("the peek value is %d\n",stack[top]);
    }
    
}
void main()

{
    int choice;
    int num;
    printf("1>>push||2>>pop||3>>show||4>>peek \n Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
               printf("Enter the value to be pushed:");
               scanf("%d",&num);
               push(num);
               break;
        case 2:
                pop();
                break;
        case 3:
               show();
               break;
        case 4:
              peek();
              break;
        default:
               printf("Please enter the valid choice code\n");       
    }
         main();
}