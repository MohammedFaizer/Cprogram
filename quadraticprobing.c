#include<stdio.h>
#define size 10
int c1=1;
int c2=3;
int arr[size];

void init()
{
    for(int i=0;i<size;i++)
    {
        arr[i]=-1;
    }
}

void insert()
{
    int key;
    printf("Enter the number");
    scanf("%d",&key);
    int hk=key%size;
    for (int i=0;i<size;i++)
    {
        int quad=hk+c1*i+c2*i*i;
        int finalkey=quad%size;
        if (arr[finalkey]==-1)
        {
            arr[finalkey]=key;
            printf("%d is inserted in the %d index",key,finalkey);
            break;
        }
        
    }
}
void delete()
{
    int key;
    printf("Enter the number to be deleted:");
    scanf("%d",&key);
    int hk=key%size;
    int count=0;
    for (int i=0;i<size;i++)
    {
        int quad=hk+c1*i+c2*i*i;
        int finalkey=quad%size;
        if (arr[finalkey]==key)
        {
            arr[finalkey]=-1;
            printf("%d is deleted in the %d index",key,finalkey);
            count++;
        }
        
    }
    if (count==0)
    {
        printf("Element is not presented.");
    }
    
}
void show()
{
    for (int  i = 0; i < size; i++)
    {
        printf("%d>>",arr[i]);
    }
    
}
int once=0;
void main()
{
    if (once==0)
    {
        init();
        once=1;
    }
    int choice;
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        show();
        break;
    case 3:
        delete();
        break;        
    
    default:
        break;
    }
    main();
}
