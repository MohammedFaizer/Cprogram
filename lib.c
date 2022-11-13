#include<stdio.h>
#include<string.h>
char searbook[50]; 
int entry=0;
struct books
{
   int copies,year,id,in,out;
   char bkname[50],authorname [50];
}b1[50];
void insert()
{
    printf("Enter the Book ID:");
    scanf("%d",&b1[entry].id);
    printf("Enter the Book Name:");
    scanf("%s", b1[entry].bkname);
    printf("Enter the Author Name:");
    scanf("%s", b1[entry].authorname);
    printf("Enter the number of copies:");
    scanf("%d",&b1[entry].copies);
    b1[entry].in=b1[entry].copies;
    b1[entry].out=0;
    printf("Enter the publication year:");
    scanf("%d",&b1[entry].year);
    entry+=1;
}
void search()
{    
     printf("Enter the Book name to be searched:\n");
     scanf("%s",searbook);
     for (int i=0;i<5;i++)
           {
           if(strcmp(searbook,b1[i].bkname)==0)
           {
           printf("Book Id:%d\n",b1[i].id);
           printf("Book Name:%s\n",b1[i].bkname);
           printf("Author Name:%s\n",b1[i].authorname);
           printf("Book copies:%d\n",b1[i].copies);
           printf("publication year :%d\n",b1[i].year);
           printf("books in:%d\n",b1[i].in);
           printf("books out:%d\n",b1[i].out);
           }
           }
}
void take()
{
    int ids;
    printf("Enter the Book id to take the book:");
    scanf("%d",&ids);
    for (int i=0;i<5;i++)
    {
        if (ids==b1[i].id && b1[i].in>0)
        {
              b1[i].in-=1;
              b1[i].out+=1;
              printf("the book %s with id:%d  has been took successfully\n",b1[i].bkname,b1[i].id); 
        }
    }  
}
void returning()
{
    int ids;
    printf("Enter the Book id to return the book:");
    scanf("%d",&ids);
    for (int i=0;i<5;i++)
    {
        if (ids==b1[i].id && b1[i].out>=1)
        {
              b1[i].in+=1;
              b1[i].out-=1;
              printf("the book %s with id:%d  has been returned successfully\n",b1[i].bkname,b1[i].id);
        }
    }
}
void yearsearch()
{
    int ysearch;
 printf("Enter the year to be searched:\n");
     scanf("%d",&ysearch);
     for (int i=0;i<5;i++)
           {
           if(ysearch==b1[i].year)
           {
           printf("Book Id:%d\n",b1[i].id);
           printf("Book Name:%s\n",b1[i].bkname);
           printf("Author Name:%s\n",b1[i].authorname);
           printf("Book copies:%d\n",b1[i].copies);
           printf("publication year :%d\n",b1[i].year);
           printf("books in:%d\n",b1[i].in);
           printf("books out:%d\n",b1[i].out);
           }
           }
}
int main()
{
    int choice;
    printf("1>>insert||2>>search||3>>year search||4>>took||5>>return||\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
           insert();
           main();
           break;
     case 2:
            search();
            main();
            break;
     case 3:
            yearsearch();
            main();
            break;       
     case 4:
             take();
             main();
             break;
     case 5:
             returning();
             main();
             break;                
    default:
    printf("Please enter a valid choice code");
    main();
    break;
     }  
    }
    
