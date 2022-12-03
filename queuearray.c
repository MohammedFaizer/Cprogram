#include <stdio.h>
 
#define MAX 50
 
void insert();
void delete();
void display();
int q[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
         printf("\n1.enqueue>>2.Dequeue>>3.Display>>4.search\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
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
            search();
            
        }
    main();
} 
 
void insert()
{
    int val;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        {
            front = 0;
        }
        printf("Insert the value in queue : ");
        scanf("%d", &val);
        rear = rear + 1;
        q[rear] = val;
    }
}
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        
    }
    else
    {
        printf("Element deleted from queue is : %d\n", q[front]);
        for (int i = 0; i <= rear; i++)
        {
            if (i==rear)
            {
                q[rear]=NULL;
                rear-=1;
            }
            else{
            q[i]=q[i+1];    
            }
            
            
        }
            }
} 
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d<-", q[i]);
    }
} 

void search()
{
    if (front==-1)
 {
    printf("stack is empty search cannot be done\n");
 }
 else{
    int sear;
    printf("Enter the value to be searched:");
    scanf("%d",&sear);
    int k=0;
    for (int i = front; i <=rear; i++)
    { 
        if(q[i]==sear)
        {
            printf("the value %d is in %d index\n",sear,i);
            k+=1;
        }
    }
    if (k==0)
    {
        printf("No such value is presented");
    }
    
    
 }
 
}