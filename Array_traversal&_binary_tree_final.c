#include <stdio.h>
int size = 15;
int tree[] = {NULL, 4, 1, 6, 5, 2, 18, 20, 7, 17, NULL, NULL, 22, NULL, 10, 12};

int getRightChild(int index)
{
    if(tree[index]!=NULL && ((2*index)+1)<=size)
        return (2*index)+1;
    return -1;
}

int getLeftChild(int index)
{
    if(tree[index]!=NULL && (2*index)<=size)
        return 2*index;
    return -1;
}

void preorder(int index)
{
    if(index>0 && tree[index]!=NULL)
    {
        printf(" %d ",tree[index]);
        preorder(getLeftChild(index)); 
        preorder(getRightChild(index)); 
    }
}

void postorder(int index)
{
    if(index>0 && tree[index]!=NULL)
    {
        postorder(getLeftChild(index));
        postorder(getRightChild(index)); 
        printf(" %d ",tree[index]); 
    }
}

void inorder(int index)
{
    if(index>0 && tree[index]!=NULL)
    {
        inorder(getLeftChild(index));
        printf(" %d ",tree[index]);
        inorder(getRightChild(index));
    }
}

int main()
{
    printf("Preorder:\n");
    preorder(1);
    printf("\nPostorder:\n");
    postorder(1);
    printf("\nInorder:\n");
    inorder(1);
    printf("\n");
    return 0;
}