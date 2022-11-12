#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
 char name[50];
 char author[50];
 int copy,year;
};
struct book b[100];
int n;
void add()
{
 int i;
 printf("Enter the number of books to be added:\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("Enter the name of the book:\n");
 scanf("%s",&b[i].name);
 printf("Enter the author of that book:\n");
 scanf("%s",&b[i].author);
 printf("Enter the number of copies:\n");
 scanf("%d",&b[i].copy);
 printf("Enter the year of that book:\n");
 scanf("%d",&b[i].year);
 }
 printf("Books were Added Successfully\n");
}
void display()
{
 int i;
 printf("Book Name\tAuthor\tNo.of Copies\tYear\n");
 for(i=0;i<n;i++)
 {

printf("%s\t%s\t%d\t%d\n",b[i].name,b[i].author,b[i].copy,b[i].year);
 }
}
void issue()
{
 int i;
 char strusr[50];
 printf("Enter the Book to issue:\n");
 scanf("%s",&strusr);
 for(i=0;i<n;i++)
 {
 if(strcmp(strusr,b[i].name)==0)
 {
 b[i].copy--;
 printf("Book was issued\n");
 }
 }
 printf("If the message\"Book was issued \" was not displayed, Please Try again\nIf came Ignore it...\n");
}
void rbook()
{
 int i;
 char strusr2[50];
 printf("Enter the Book to Return:\n");
 scanf("%s",&strusr2);
 for(i=0;i<n;i++)
 {
 if(strcmp(strusr2,b[i].name)==0)
 {
 b[i].copy++;
 printf("Book was returned\n");
 }
 }
 printf("If the message\"Book was returned \" wasnot displayed, Please Try again\nIf came Ignoreit...\n");
}
void sbyear()
{
 int i;
 int usryr;
 printf("Enter the year to search the book:\n");
 scanf("%d",&usryr);
 for(i=0;i<n;i++)
 {
 if(usryr==b[i].year)
 {
 printf("%s\n",b[i].name);
 }
 }
 printf("If any name of the book was not displayed,Please Try Again\nIf came Ignore it...\n");
}
void stock()
{
 int i;
 char strusr1[50];
 printf("Enter the Book to Show:\n");
 scanf("%s",&strusr1);
 for(i=0;i<n;i++)
 {
 if(strcmp(strusr1,b[i].name)==0)
 {
 printf("%d\n",b[i].copy);
 }
 }
 printf("If the copies of the book was notdisplayed, Please Try again\nIf came Ignore it...\n");
}
void main()
{
 int choice;
 printf("KEKRAAN MEKRAAN LIBRARY SYSTEMS\n");
 printf("Please Select the choice process:\n1.Addthe Book to the Database\n2.Issue the Book\n3.Returnthe Book\n4.Search the Book by Year\n5.Stocktalker\n6.Display\n");
 printf("Press 0 for Exit:\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
 printf("ADDING BOOK TO THE DATABASE\n");
 add();
 main();
 }
 case 2:
 {
 printf("ISSUING BOOK\n");
 issue();
 main();
 }
 case 3:
 {
 printf("RETURNING BOOK\n");
 rbook();
 main();
 }
 case 4:
 {
 printf("SEARCHING BOOK BY YEAR\n");
 sbyear();
 main();
 }
 case 5:
 {
 printf("STOCK STALKER\n");
 stock();
 main();
 }
 case 6:
 {
 display();
 main();
 }
 case 0:
 {
 exit(0);
 }
 default:
 {
 printf("Wrong Option... Try Again...\n");
 main();
 }
 }
}