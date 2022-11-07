#include<stdio.h>
#include<string.h>
struct books
{
   int copies,year;
   char bkname[50];
   int in;
   int out;
};
int main()
{
    int choice;
    int count=1;
    int entry=0;
    char searbook[50];
    struct books b1[5];
    int a;
    while(count==1)
    {
    printf("press 1 to insert*****press 2 to search\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
           printf("Enter the Book Name:");
           scanf("%s", b1[entry].bkname);
           printf("Enter the number of copies:");
           scanf("%d",&b1[entry].copies);
           b1[entry].in=b1[entry].copies;
           b1[entry].out=0;
           printf("Enter the publication year:");
           scanf("%d",&b1[entry].year);
           entry+=1;
           break;
     case 2:
           printf("Enter the Book name to be searched:\n");
           scanf("%s",searbook);
           a=-1;
           for (int i = 0; i <5;i++)
           {
           if(strcmp(searbook,b1[i].bkname)==0)
           {
           printf("Book Name:%s\n",b1[i].bkname);
           printf("Book copies:%d\n",b1[i].copies);
           printf("publication year :%d\n",b1[i].year);
           printf("books in:%d\n",b1[i].in);
           printf("books out:%d\n",b1[i].out);
           a=i;
        }
     }
     if (a>=0)
     {
      printf("press 3 to take********press 4 to return*******press 5 menu:\n");
      scanf("%d",&choice);
      switch(choice)
      {
         case 3:
         if(b1[a].in>0){
         b1[a].in-=1;
         b1[a].out+=1;
         printf("********Took Book sucessfully*****\n");
         }
         break;
         case 4:
         if(b1[a].out>=1){
         b1[a].in+=1;
         b1[a].out-=1;
         printf("**********returned Book sucessfully*****\n");
         }
         break;
         case 5:
         printf("***** ThankYou :) *****\n");
         break;
      }
     } 
    break;
    default:
    printf("Please enter a valid choice number");
    break;
     }
       }
    }
    