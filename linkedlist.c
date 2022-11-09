#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
void printList(struct Node* n)
{
 while(n!=NULL)
 {
    printf("%d",n->data);
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

    printList(head);

    return 0;
}
