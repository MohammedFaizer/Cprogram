#include<stdio.h>
#include<stdlib.h>
struct Node* push();
struct Node
{
    int data;
    struct Node* next;
};
void printList(struct Node* n)
{
 while(n!=NULL)
 {
    printf("%d\n",n->data);
    n=n->next;
 }
}
int main()
{
    struct Node* head=NULL;
    struct Node* first=NULL;
    struct Node* second=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=3;
    second->next=NULL;

  struct Node* ret=push(head,5);
    printList(ret);

    return 0;
}
struct Node* push(struct Node* headref,int xdata)
{
    struct Node* newnode=NULL;
    struct Node* mothernode=NULL;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    mothernode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=xdata;
    newnode->next=headref;

    mothernode->data=7;
    mothernode->next=newnode;
   

    


}