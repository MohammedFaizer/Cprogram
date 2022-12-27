#include<stdio.h>
#define size 10
int top=-1;
char arr[size];
void push()
{
    char c;
    printf("Enter a character: ");
    scanf(" %c",&c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if(top<size-1)
            {
                if(arr[top]!=c)
                {
                top++;
                arr[top]=c;
                printf("element %c is inserted in %d index of the stack\n",c,top);
                }
                else
                {
                    printf("Repitation is not allowed.\n");
                }
            }
            else
            {
                printf("Stack overFlow.\n");
            }   
        }
    else
        {
            printf("%c is not an alphabet.\n", c);
        }
}
void pop()
{
    if(top!=-1)
    {
        top--;
        printf("The element is poped.\n");
    }
    else
    {
        printf("Stack is Underflow\n");
    }
}
void show()
{
    int temp=top;
    while (temp!=-1)
    {
        printf("%c",arr[temp]);
        temp--;
    }  
}
void occurance()
{
    int count=0;
    char sc;
    printf("Enter the character to be searched:");
    scanf(" %c",&sc);
    for(int i=0;i<=top;i++)
    {
        if(arr[i]==sc)
        {
            count+=1;
        }
    }
    printf("Number of '%c' in the stack is :%d.\n",sc,count);
}
void main()
{
    int choice;
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;
        case 2:
        show();
        break;
        case 3:
        pop();
        break;
        case 4:
        occurance();
        break;
        default:
        printf("\nPlease enter the correct choice\n");
        break;
    }
    main();
}