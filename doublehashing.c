#include<stdio.h>
#define size 10
int table[size];

void init()
{
    for (int i=0;i<size;i++)
    {
        table[i]=-1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d",table[i]);
    }
    
}
void insertion()
{
    int num,hk,hk2,hkfinal,key;
    printf("Enter the value to be inserted");
    scanf("%d",&num);
    hk=num%11;
    printf("%d\n",hk);
    printf("%d",table[hk]);
    if(table[hk]==-1)
    {
        printf("it is first inserted in [%d] index\n  ",hk);
        table[hk]=num;
        printf("%d",table[hk]);
    }
    
    else
    {
        //collision happens1
        int hk2=num%5;
        for (int i=0;i<size;i++)
        {
            hkfinal=hk+(i*hk2);
            key=hkfinal%size;
            if (table[key]==-1)
            {
                table[key]=num;
                printf("it is double inserted in [%d] index",key);
                break;
            }
            
        }
        
    }
}

void show()
{
    for(int i=0;i<size;i++)
    {
        printf("%d->",table[i]);
    }
}

int once=0;
void main()
{
    if(once==0)
    {
        init();
        once=1;
    }
    int choice;
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        insertion();
        break;
        case 2:
        show();
        break;
    }
    main();
}